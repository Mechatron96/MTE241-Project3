#include "stdio.h"
#include <stdint.h>
#include <LPC17xx.h>
#include "GLCD.h"
#include "uart.h"
#include <RTL.h>
#include <math.h>
#include "IOControls.h"

// Declare the semaphores 
OS_SEM selectLock1, selectLock2, selectLock3, selectLock4;
OS_SEM luckLock1, luckLock2, luckLock3, luckLock4;

uint16_t buttonPressed;
uint16_t buttonIsCurrentlyPressed;
uint16_t velocityIncr;
uint16_t shotQuality;
uint16_t shotStatus;

float XYAngle;
float XZAngle;
float initVelocity;
float score;
float shotsTaken;
float playerPosition[2];
float xPositions[5];
float yPositions[5];

const float TOTAL_SHOTS = 15;
const float TOTAL_POINTS = 30;


__task void updateXYAngle(void){
	while(1){
		os_sem_wait(&selectLock1, 0xffff);
		checkPotentiometer();
		os_sem_send(&selectLock2);
	}
}

__task void updateXZAngle(void){
	while(1){
		os_sem_wait(&selectLock2, 0xffff);
		checkJoyStick();
		os_sem_send(&selectLock3);
	}
}

void updateInitVelocity(void){
	//UPDATE THE INITIAL VELOCITY
}

void shotCalculation(void){
	// LOGIC FOR GOOD/BAD shot
} 

__task void checkSelectButton(void){
	while(1){
		os_sem_wait(&selectLock3, 0xffff);
		//buttonIsCurrentlyPressed = is button currently pressed
		if(buttonIsCurrentlyPressed){
			buttonPressed =1;
			updateInitialVelocity();
			os_sem_send(&selectLock4);
		}
		else if (buttonPressed && !buttonIsCurrentlyPressed){// player released button
			updateInitialVelocity();
			shotCalculation();
			//wait for some time to allow player to see their power bar
			buttonPressed =0;
			os_sem_send(&luckLock1);

		else{
			os_sem_send(&selectLock4);
		}
		os_tsk_pass(); //Pass task to next task
	}
}

void drawSelectScreen(uint16_t drawPowerBar){
	//draws the select screen
	//needs the initVelocity to draw the length of the bar
}

__task void updateSelectScreen(void){
	while(1){
		os_sem_wait(&selectLock4, 0xffff);
		if (!buttonPressed){
			drawSelectScreen(0);
		}
		else{
			drawSelectScreen(1);
		}
		os_sem_send(&selectLock1);
		os_tsk_pass();
	}
}

void ledLogic(void){
	//LOGIC FOR DISPLAYING LEDS
}

__task void displayLED(void){
	while(1){
		os_sem_wait(&luckLock1, 0xffff);
		ledLogic();
		os_sem_send(&luckLock2);
		os_tsk_pass();
	}
}

void ledResult(void){
	//LOGIC FOR LUCKYSHOT OR NOT
	//UPDATE SHOT STATUS
}

__task void checkLuckButton(void){
	while(1){
		os_sem_wait(&luckLock2, 0xffff);
		//buttonIsCurrentlyPressed = is button currently pressed
		if(buttonIsCurrentlyPressed){
			buttonPressed =1;
			os_sem_send(&luckLock1);
		}
		else if (buttonPressed && !buttonIsCurrentlyPressed){
			ledResult();
			buttonPressed =0;
			os_sem_send(&luckLock3);
		}
		else{
			os_sem_send(&luckLock1);
		}
		os_tsk_pass();
	}
	
}

void resetAfterAShot(void){
	//RESET XZAngle initVelocity shotStatus
	//UPDATE score shotsTaken position
}

void animate(uint16_t animation){
	switch (animation){
		case 0:
			//Ball didn't come close
		break;
		case 1:
			//ball bounced out
		break;
		case 2:
			//ball bounced in;
		break;
		case 3:
			//ball went straight in;
		break;
		case 4;
			//after final shot;
		break;
	}
}

__task void drawLuckScreen{
	while(1){
		os_sem_wait(&luckLock3, 0xffff);
		animate(shotStatus);
		//Taking another shot
		if (shotsTaken <= TOTAL_SHOTS){
			resetAfterAShot();
			os_sem_send(&selectLock1);
		}
		else{ // 3-point contest over
			animate(4);
		}
		os_tsk_pass();
	}
}

 void initSemaphores(void){
	os_sem_init(&selectLock1 ,1);
	os_sem_init(&selectLock2 ,0);
	os_sem_init(&selectLock3 ,0);
	os_sem_init(&selectLock4 ,0);
	
	os_sem_init(&luckLock1 ,0);
	os_sem_init(&luckLock2 ,0);
	os_sem_init(&luckLock3 ,0);
}

void initVariables(void){
	XYAngle =270;
	XZAngle =0;
	initVelocity =0;
	score =0;
	shotsTaken =0;
	velocityIncr=1;
	shotQuality =0;
	shotStatus =0;
	//INITIALIZE xPositions AND yPositions
	playerPosition[0] = xPositions[0];
	playerPosition[1] = yPositions[0];
}

__task void taskInit(void){
	//initialize semaphores
	initSemaphores();
	
	//initialize variables;
	initVariables();
	
	// create all the other tasks
	os_tsk_create(updateXYAngle,1);
	os_tsk_create(updateXZAngle,1);
	os_tsk_create(checkSelectButton,1);
	os_tsk_create(updateSelectScreen,1);
	os_tsk_create(displayLED,1);
	os_tsk_create(checkLuckButton,1);
	os_tsk_create(drawLuckScreen,1);
	
	// delete this task when done
	os_tsk_delete_self();
}

int main(void){
	printf("begin!\n")
	os_sys_init(taskInit);
	return 0;
}
