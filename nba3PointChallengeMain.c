#include "stdio.h"
#include <stdint.h>
#include <LPC17xx.h>
#include "GLCD.h"
#include "uart.h"
#include <RTL.h>
#include <math.h>
#include "IOControls.h"
#include "nbaGraphics.h"

// Declare the semaphores 
OS_SEM selectLock1, selectLock2, selectLock3, selectLock4;
OS_SEM luckLock1, luckLock2, luckLock3;


uint32_t led_num_display[8];

//variables that change after shot
uint16_t score;
uint16_t shotsTaken;

// variables that change per shot
uint16_t led_success;
uint16_t animationStatus;
float playerPosition[2];

// variable that change constantly
uint16_t buttonPressed;
float XYAngle;
float XZAngle;
uint32_t led_num_display_index;

const float xPositions[5] = {0, -5.12, -7.24, -5.12,0}; // @ 90, 135, 180, 225 and 270 from +x axis
const float yPositions[5] = {6.71, 5.12,0,-5.12,-6.71};

const uint16_t TOTAL_SHOTS = 15;
const uint16_t TOTAL_POINTS = 30;
const uint16_t LED_SPEED = 200;

// This stuff should probably be another class
enum class ShotQuality{
	MISS,
	BAD_SHOT,
	OK_SHOT,
	GOOD_SHOT,
	SPLASH
}



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

ShotQuality shotCalculation(void){
	float vXY, vZ,XYdist,time,vX,vY,xPos,yPos,c1,c2;
	const float R_HOOP = 0.2286;// This is the radius of the hoop
	vXY = initVelocity * cos(XZAngle/180);
	vZ = initVelocity * sin(XZAngle/180);
	
	XYdist = sqrt(pow(playerPosition[0],2)+pow(playerPosition[1],2));
	time = 0;
	
	if (vZ * vZ <= 4*4.9*3.05){
		return MISS;
	}
	else {
		time = (vZ + sqrt(pow(vZ,2) - 4 * 4.9 * 3.05))/ 9.8;
	}
	
	vX = vXY * cos(XYAngle);
	vY = vXY * sin(XYAngle);
	 
	xPos = vX*time+playerPosition[0];
	yPos = vY*time+playerPosition[1];
	c1 = (pow(xPos,2) + pow(yPos,2);
	c2 = pow(xPos-R_HOOP*2,2) + pow(yPos,2); // accounting for if the ball bounces of the backboard 
	/*
	To account for ball bouncing off the backboard, it is assumed that the ball bounces perfectly off of the
	backboard. This essentially means we can mirror the actual hoop. By assuming the backboard is 0cm from the 
	rim of the net and is itself perfectly thin we can get the position of the mirrored hoop. 
	*/
	if (c1<= pow(R_HOOP/4,2) ||c2 <= pow(R_HOOP/4,2)){ // Ball goes straight in. 
			return SPLASH; 
		}
	else if (c1<= pow(R_HOOP/2,2) ||c2 <= pow(R_HOOP/2,2)){ // BALL PROBABLY goes in
			return GOOD_SHOT;
		}
	else if (c1<= pow(R_HOOP/4*3,2) ||c2 <= pow(R_HOOP/4*3,2)){ // BAll has 50/50 chance of going in
			return OK_SHOT;
		}
	else if (c1<= pow(R_HOOP,2) ||c2 <= pow(R_HOOP,2){// BALL PROBABLY doesnt goes in
			return BAD_SHOT;		
		}
	return MISS;
}

void luckPhasePrep(ShotQuality sQ){
	switch(sQ){
		default:
		case MISS :
			led_num_display = {1,2,4,8,16,32,64,128};
			led_success =0;
		break;
		case BAD_SHOT :
			led_num_display = {25,27,28,24,24,56,88,152};
			led_success =24;
		break;
		case OK_SHOT :
			led_num_display = {61,62,60,60,60,60,124,188};
			led_success =60;
		break;
		case GOOD_SHOT :
			led_num_display = {127,126,126,126,126,126,126,254};
			led_success =126;
		break;
		case SPLASH :
			led_num_display = {255,255,255,255,255,255,255,255};
			led_success =255;
		break;
	}
}

__task void checkSelectButton(void){
	ShotQuality shotQuality;
	while(1){
		os_sem_wait(&selectLock3, 0xffff);
		
		// TODO print out everything
		if(buttonIsCurrentlyPressed){
			buttonPressed =buttonIsCurrentlyPressed;
			initVelocity = initVelocity +0.01;
			os_sem_send(&selectLock4);
		}
		else if (buttonPressed && !buttonIsCurrentlyPressed){// player released button
			// player released button or maxed out the velocity
			initVelocity = 10.0;
			shotQuality = shotCalculation(initVelocity);
			luckPhasePrep(shotQuality);
			buttonPressed =0;
			initVelocity =0;
			//wait for some time to allow player to see their power bar
			os_sem_send(&luckLock1);
		}
		else{
			os_sem_send(&selectLock4);
		}
		os_tsk_pass(); //Pass task to next task
	}
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

void ledLogic(int incr){
	if (incr >= LED_SPEED){
		led_num_display_index = led_num_display_index +1;
		led_num_display_index = led_num_display_index%8;
		ledOutput(led_num_display[led_num_display_index]);
		incr=0;
	}
}

__task void displayLED(void){
	uint16_t incr =0;
	while(1){
		os_sem_wait(&luckLock1, 0xffff);-
		incr = incr +1;
		ledLogic(incr);
		os_sem_send(&luckLock2);
		os_tsk_pass();
	}
}

void reset(void){
	//RESET XZAngle animationStatus
	//UPDATE playerposition	
	XZAngle =0;
	XYAngle =0;
	playerPosition[0] = xPositions[shotsTaken/3];
	playerPosition[1] = yPositions[shotsTaken/3];
	animationStatus =0;
	led_success =0;
	led_num_display_index =0;
	//shotStatus=0;
}

void ledResult(void){
	shotsTaken = shotsTaken +1;
	if (led_num_display[led_num_display_index] == led_success){
		switch(led_success){
			default:
			case 24:
			case 60:
					animationStatus =2;
			break;
			case 126:
				if (led_num_display_index == 3 ||led_num_display_index==4){
					animationStatus =3;
				}
				else{
					animationStatus =2;
				}
				break;
			case 255:
					animationStatus =3;
			break;
		}
		if (shotsTaken %3 ==0){
			score += 2;
		}
		else{
			score += 1;
		}
	}
	else{
		if (led_success == 0){
			animationStatus =0;
		}
		else{
			animationStatus =1;			
		}
	}
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

__task void drawLuckScreen{
	while(1){
		os_sem_wait(&luckLock3, 0xffff);
		animate(animationStatus);
		//Taking another shot
		if (shotsTaken <= TOTAL_SHOTS){
			reset();
			os_sem_send(&selectLock1);
		}
		else{ // 3-point contest over
			animate(4);
			//print out stats about score and maybe time it took
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
	reset();
	buttonPressed =0;
	score =0;
	shotsTaken =0;
	led_num_display={3,3,3,3,3,3,3,3}
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
	printf("press button to begin!\n");
	// write in some of the rules here.
	while(!buttonIsCurrentlyPressed){}
	while(buttonIsCurrentlyPressed){}
	os_sys_init(taskInit);
	return 0;
}















/*
//Test Code For IOControls.h
//Im using Mutexs, to prevent multiple task accessing the protected data
//You may want to change code above

OS_MUT task1, task2, task3, task4;

int XZAngle = 0;
int XYAngle = 0;
int valueButton = 0;
int Led = 13;


__task void taskPotentiometer(void){
	while(1){

	os_mut_wait(&task1, 0xffff);
	
	XYAngle = checkPotentiometer();
		
	//printf("XYAngle:%d\n", XYAngle);	
		
	os_mut_release(&task2);
	os_tsk_pass();
	}
	
}


__task void taskJoyStick(void){
		while(1){
		os_mut_wait(&task2, 0xffff);
		XZAngle	= checkJoyStick(XZAngle);
			
		//printf("XZAngle: %d\n", XZAngle);
			
		os_mut_release(&task3);
		os_tsk_pass();

	}
}


__task void taskButton(void){
	while(1){
		os_mut_wait(&task3, 0xffff);
		valueButton = ButtonCurrentlyPressed();
		
		printf("Button Push: %d\n", valueButton);
		
		os_mut_release(&task4);
		os_tsk_pass();
	}

}

__task void taskLED(void){
	while(1){
		os_mut_wait(&task4, 0xffff);
		
		
		setLED(Led);
		
		os_mut_release(&task1);
		os_tsk_pass();

	}	
}

__task void Start_task(void){
	//Initialize semaphores and set the first one to one
	os_mut_init(&task1);
	os_mut_init(&task2);
	os_mut_init(&task3);

	// create all the other tasks
	//initIOControls();
	os_tsk_create(taskPotentiometer, 1);
	os_tsk_create(taskJoyStick, 1);
	os_tsk_create(taskButton, 1);
	os_tsk_create(taskLED, 1);
	
	// delete this task when done
	os_tsk_delete_self();
}

int main(void){
	printf("Starting\n");
	
	//Create and initialize Start Task
	os_sys_init(Start_task);

	return 0;
}
	
*/



