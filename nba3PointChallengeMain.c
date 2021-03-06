#include "stdio.h"
#include <string.h>
#include <stdint.h>
#include <LPC17xx.h>
#include "GLCD.h"
#include "uart.h"
#include <RTL.h>
#include <math.h>
#include "IOControls.h"
#include "nbaGraphics.h"

// Declare the semaphores 

OS_SEM selectLock1, selectLock2, selectLock3;
OS_SEM luckLock1, luckLock2;

uint32_t led_num_display[8] = {1,1,1,1,1,1,1,1};

//variables that change after shot
uint16_t score;
uint16_t shotsTaken;
uint16_t incr;

// variables that change per shot
uint16_t led_success;
int shotAnimationStatus;
float playerPosition[2];

// variable that change constantly
int buttonPressed;
int XYAngle;
int XZAngle;
double initVelocity =0;
int led_num_display_index;

const float HEIGHT_OF_NET = 1.05;
const float GRAV = 9.8;

const uint16_t MAX_SHOTS = 15;
const uint16_t MAX_POINTS = 15;
const uint16_t LED_SPEED = 40000;

// This stuff should probably be another class
const uint16_t MISS = 0;
const uint16_t BAD_SHOT = 1;
const uint16_t OK_SHOT = 2;
const uint16_t GOOD_SHOT = 3;
const uint16_t SPLASH = 4;


__task void updateAngles(void){
	while(1){
		os_sem_wait(&selectLock1, 0xffff);
		XYAngle = checkPotentiometer();
		XZAngle = checkJoyStick(XZAngle);
		printf("\n%d,%d",XYAngle,XZAngle);
		printf("  updateAngles");
		os_sem_send(&selectLock2);
	}
}

uint16_t shotCalculation(){
	double vXY, vZ,time,vX,vY,xPos,yPos,c1,c2;
	const double R_HOOP = 0.2286;// This is the radius of the hoop
	vXY = initVelocity * cos(XZAngle*3.1415/180);
	vZ = initVelocity * sin(XZAngle*3.1415/180);
	time = 0;
	
	printf("\n\n\niV%f,vZ %f, min%f",initVelocity,vZ,4*GRAV*HEIGHT_OF_NET);
	if (vZ * vZ <= 4*GRAV /2 *HEIGHT_OF_NET){
		return MISS; // ball completely misses the net
	}
	else {
		time = (vZ + sqrt(pow(vZ,2) - 4 * GRAV/2 * HEIGHT_OF_NET))/ GRAV;
	}
	
	vX = vXY * cos(XYAngle*3.1415/180);
	vY = vXY * sin(XYAngle*3.1415/180); 
	 
	xPos = vX*time+playerPosition[0];
	yPos = vY*time+playerPosition[1];
	c1 = pow(xPos,2) + pow(yPos,2);
	c2 = pow(xPos-R_HOOP*2,2) + pow(yPos,2); // accounting for if the ball bounces of the backboard 
	printf("vZ %f, vXY %f, vX %f, vY%f, time %f, xPos %f,yPos %f",vZ,vXY,vX,vY,time,xPos,yPos);
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
	else if (c1<= pow(R_HOOP,2) ||c2 <= pow(R_HOOP,2)){// BALL PROBABLY doesnt goes in
			return BAD_SHOT;		
		}
	return MISS;
}

void luckPhasePrep(uint16_t sQ){
	switch(sQ){
		default:
		case MISS :
			//led_num_display = {1,2,4,8,16,32,64,128};
			led_num_display[0] = 1;
			led_num_display[1] = 2;
			led_num_display[2] = 4;
			led_num_display[3] = 8;
			led_num_display[4] = 16;
			led_num_display[5] = 32;
			led_num_display[6] = 64;
			led_num_display[7] = 128;
			led_success =0;
		break;
		case BAD_SHOT :
//			led_num_display = {25,27,28,24,24,56,88,152};
			led_num_display[0] = 25;
			led_num_display[1] = 26;
			led_num_display[2] = 28;
			led_num_display[3] = 24;
			led_num_display[4] = 24;
			led_num_display[5] = 56;
			led_num_display[6] = 88;
			led_num_display[7] = 152;
			led_success =24;
		break;
		case OK_SHOT :
//			led_num_display = {61,62,60,60,60,60,124,188};
			led_num_display[0] = 61;
			led_num_display[1] = 62;
			led_num_display[2] = 60;
			led_num_display[3] = 60;
			led_num_display[4] = 60;
			led_num_display[5] = 60;
			led_num_display[6] = 124;
			led_num_display[7] = 188;
			led_success =60;
		break;
		case GOOD_SHOT :
//			led_num_display = {127,126,126,126,126,126,126,254};
			led_num_display[0] = 127;
			led_num_display[1] = 126;
			led_num_display[2] = 126;
			led_num_display[3] = 126;
			led_num_display[4] = 126;
			led_num_display[5] = 126;
			led_num_display[6] = 126;
			led_num_display[7] = 254;
			led_success =126;
		break;
		case SPLASH :
//			led_num_display = {255,255,255,255,255,255,255,255};
			led_num_display[0] = 255;
			led_num_display[1] = 255;
			led_num_display[2] = 255;
			led_num_display[3] = 255;
			led_num_display[4] = 255;
			led_num_display[5] = 255;
			led_num_display[6] = 255;
			led_num_display[7] = 255;
			led_success =255;
		break;
	}
}

__task void checkSelectButton(void){
	uint16_t shotQuality;
	initVelocity =8.0;// this is close to minimum velocity to get the ball into the net
	while(1){
		os_sem_wait(&selectLock2, 0xffff);
		
		// TODO print out everything
		if(ButtonCurrentlyPressed()){
			buttonPressed =ButtonCurrentlyPressed();
			initVelocity = initVelocity +0.05;
			printf("  checkSelectButtonSelectLock3");
			os_sem_send(&selectLock3);
		}
		else if (buttonPressed && !ButtonCurrentlyPressed() || initVelocity>= 20){// player released button or basketball is thrown at close to terminal velocity
			// player released button or maxed out the velocity
			//printf("XY %d, XZ %d, ButtonPressed %d, initV%f, eSHOT CALCULATIONS",XYAngle ,XZAngle,buttonPressed,initVelocity);
			if (initVelocity>= 20){//basket ball can't go much faster than this. 
				initVelocity = 20.0;
			}
			//testing code TODO REMOVE
			initVelocity = 8.90;
			XYAngle = 270;
			XZAngle = 55;
			
			shotQuality = shotCalculation();
			luckPhasePrep(shotQuality);
			while(!ButtonCurrentlyPressed()){}
			while(ButtonCurrentlyPressed()){}
			buttonPressed =0;
			//wait for some time to allow player to see their power bar
			os_sem_send(&luckLock1);
		}
		else{
		printf("  checkSelectButtonSelectLock3");
			os_sem_send(&selectLock3);
		}
		//printf("  checkSelectButton");
		os_tsk_pass(); //Pass task to next task
	}
}
void updateScreen(double ainitVelocity,int aXYAngle,int aXZAngle){ // this updates the top part of the screen when powerbar
	// display numbers and shit
	// Done
	char buf4[64];
	char buf5[64];
	char buf3[64];
	sprintf(buf4, "%d", aXYAngle);
	sprintf(buf5, "%d", aXZAngle);
	sprintf(buf3, "%f", ainitVelocity);
	
	//TODO MUTEXES FOR THE LCD OR THE GLOBAL VARIABLES
	/*GLCD_DisplayString(24, 1, 0, "XYAngle: ");
	GLCD_DisplayChar(24, 13, 0, buf4[0]);
	if(buf4[1]!= NULL)
		GLCD_DisplayChar(24, 14, 0, buf4[1]);
	if(buf4[2]!= NULL)
		GLCD_DisplayChar(24, 15, 0, buf4[2]);

	
	GLCD_DisplayString(24, 20, 0, "XZAngle: ");
	GLCD_DisplayChar(24, 31, 0, buf5[0]);
	if(buf5[1]!= NULL)
		GLCD_DisplayChar(24, 32, 0, buf5[1]);
	if(buf5[2]!= NULL)
		GLCD_DisplayChar(24, 33, 0, buf5[2]);
	
	//printf("%c%c%c", buf4[0], buf4[1], buf4[2]);
	
	GLCD_DisplayString(24, 38, 0, "Velocity: ");
	GLCD_DisplayChar(24, 48, 0, buf3[0]);
	if(buf3[1]!= NULL)
		GLCD_DisplayChar(24, 49, 0, buf3[1]);
	if(buf3[2]!= NULL)
		GLCD_DisplayChar(24, 50, 0, buf3[2]);
	if(buf3[3]!= NULL)
		GLCD_DisplayChar(24, 51, 0, buf3[3]);
	*/
} 
__task void updateSelectScreen(void){
			char buf1[64];
			char buf2[64];
	while(1){
		os_sem_wait(&selectLock3, 0xffff);
		//GLCD_DisplayString(27,0, 1, "MISS!");
		if (!buttonPressed){
			//updateStatsSelectScreen(initVelocity,XYAngle,XZAngle);
		}
		else{
			//updateStatsSelectScreen(initVelocity,XYAngle,XZAngle);
			
		}
		updateScreen(initVelocity,XYAngle,XZAngle);
		sprintf(buf1, "%d", score);
			sprintf(buf2, "%d", shotsTaken);
			GLCD_DisplayString(28, 1, 0 , "Score: ");
			GLCD_DisplayChar(28, 13, 0, buf1[0]);
			if(buf1[1]!= NULL)
				GLCD_DisplayChar(28, 14, 0, buf1[1]);
			GLCD_DisplayString(28, 20, 0, "Shots Taken: ");
			GLCD_DisplayChar(28, 26, 0, buf2[0]);
			if(buf2[1]!= NULL)
				GLCD_DisplayChar(28, 27, 0, buf2[1]);
		printf("  updateSelectScreen");
		os_sem_send(&selectLock1);
		os_tsk_pass();
	}
}

void ledLogic(int incr){
		//printf("\n%d",incr);
	uint32_t spin =0;
	if (incr >= LED_SPEED){
		led_num_display_index = led_num_display_index +1;
		led_num_display_index = led_num_display_index%8;
		setLED(led_num_display[led_num_display_index]);
		for(spin =0; spin< 800000; spin++ ); // Provide a delay so that led switching is visible and can be reacted to.
		//printf("\n%d",led_num_display[led_num_display_index]);
		incr=0;
	}
}

void reset(void){
	//RESET XZAngle shotAnimationStatus
	//UPDATE playerposition	
	XZAngle =0;
	XYAngle =0;
	playerPosition[0] = xPositions[shotsTaken/3];
	playerPosition[1] = yPositions[shotsTaken/3];
	shotAnimationStatus =0;
	led_success =0;
	led_num_display_index =0;
	initVelocity =8.0;
	setLED(0);
	//shotStatus=0;
}

void ledResult(void){
	shotsTaken = shotsTaken +1;
			printf("\n%d , %d ",led_num_display[led_num_display_index], led_success);
	if (led_num_display[led_num_display_index] == led_success){
		switch(led_success){
			default:
			case 24:
			case 60:
					shotAnimationStatus =2;
			break;
			case 126:
				if (led_num_display_index == 3 ||led_num_display_index==4){
					shotAnimationStatus =3;
				}
				else{
					shotAnimationStatus =2;
				}
				break;
			case 255:
					shotAnimationStatus =3;
			break;
		}
		if(shotsTaken%3 ==0){
		score += 1;
		}
		score += 1;
	}
	else{
		if (led_success == 0){
			shotAnimationStatus =0;
		}
		else{
			shotAnimationStatus =1;			
		}
	}
	printf("\n%d/%d, %d/%d", score,MAX_POINTS,shotsTaken,MAX_SHOTS );

}

__task void checkLuckButton(void){
	//printf("check luck buttona");
	while(1){
		ledLogic(incr);
		incr = incr +1;
		os_sem_wait(&luckLock1, 0xffff);
		//buttonIsCurrentlyPressed = is button currently pressed
		if(ButtonCurrentlyPressed()){
			buttonPressed =1;
			os_sem_send(&luckLock1);
		}
		else if (buttonPressed && !ButtonCurrentlyPressed()){
			ledResult();
			while(!ButtonCurrentlyPressed()){}
			while(ButtonCurrentlyPressed()){}
			buttonPressed =0;
				setLED(0);
			os_sem_send(&luckLock2);
			os_tsk_pass();
		}
		else{
			os_sem_send(&luckLock1);
		}
	}
}

__task void drawLuckScreen(void){
	while(1){
		os_sem_wait(&luckLock2, 0xffff);
		shotAnimation(shotAnimationStatus);
		//Taking another shot
		if (shotsTaken <MAX_SHOTS){
			reset();
			os_sem_send(&selectLock1);
		}
		else{ // 3-point contest over
			finalAnimation(score);
			//print out stats about score and maybe time it took
		}
		os_tsk_pass();
	}
}

 void initSemaphores(void){
	os_sem_init(&selectLock1 ,1);
	os_sem_init(&selectLock2 ,0);
	os_sem_init(&selectLock3 ,0);
	
	os_sem_init(&luckLock1 ,0);
	os_sem_init(&luckLock2 ,0);
}

void initVariables(void){
	reset();
	buttonPressed =0;
	score =0;
	shotsTaken =0;
	incr=0;
}

__task void taskInit(void){
	//initialize semaphores
	initSemaphores();
	
	//initialize variables;
	initVariables();
	
	os_itv_set(2000);//i dont think this does anything TODO
	// create all the other tasks
	os_tsk_create(updateAngles,1);
//	os_tsk_create(updateXZAngle,1);
	os_tsk_create(checkSelectButton,1);
	os_tsk_create(updateSelectScreen,1);
//	os_tsk_create(displayLED,1);
	os_tsk_create(checkLuckButton,1);
	os_tsk_create(drawLuckScreen,1);
	
	// delete this task when done
	os_tsk_delete_self();
}

int main(void){	
	//char x[] = 'Hello';
	
	printf("press button to begin!\n");
	initialize();
	
	
	while(!ButtonCurrentlyPressed()){}
	clearScreen();
	//updateStatsSelectScreen(8.88 , 212,  122);
	//drawSelectScreenBottom(1, 2);
	while(ButtonCurrentlyPressed()){}
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



