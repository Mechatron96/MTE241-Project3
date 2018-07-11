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

OS_MUT selectTask1, selectTask2, selectTask3, selectTask4;
OS_MUT luckTask1;
OS_SEM updateLock;

int XZAngle = 0;
int XYAngle = 0;
int buttonPressed = 0;
int initVelocity = 800;
int score =0;
int shotsTaken =0;
int updateScreen =0;

int incr =0;
int luckFlag =0;

const float HEIGHT_OF_NET = 1.05;
const float GRAV = 9.8;

const uint16_t MISS = 0;
const uint16_t BAD_SHOT = 1;
const uint16_t OK_SHOT = 2;
const uint16_t GOOD_SHOT = 3;
const uint16_t SPLASH = 4;
const uint16_t MAX_SHOTS = 15;
const uint16_t MAX_POINTS = 15;
const uint16_t LED_SPEED = 100;
int shotAnimationStatus=0;


uint32_t led_num_display[8] = {1,1,1,1,1,1,1,1};
int led_num_display_index =0;
uint16_t led_success =0;

const double xPositions[5] = {0, -5.12, -7.24, -5.12,0}; // @ 90, 135, 180, 225 and 270 from +x axis
const double yPositions[5] = {6.71, 5.12,0,-5.12,-6.71};

float playerPosition[2];


__task void taskUpdateAngles(void){
	while(1){
		os_mut_wait(&selectTask1, 0xffff);
		os_sem_wait(&updateLock,0xffff);
		if(!luckFlag){
			if((abs(XYAngle - checkPotentiometer()) > 1)){
			updateScreen =1;
			XYAngle = checkPotentiometer();
			}
			if(XZAngle != checkJoyStick(XZAngle)){
					updateScreen =1;
					XZAngle	= checkJoyStick(XZAngle);
			}
		}
		os_mut_release(&selectTask2);
		os_sem_send(&updateLock);
		os_tsk_pass();
	}
}

__task void taskSelectButton(void){
	while(1){
		os_mut_wait(&selectTask2, 0xffff);
		os_sem_wait(&updateLock,0xffff);
		if(!luckFlag){
			if( checkJoyStickButton()){
				initVelocity +=5;
				updateScreen =1;
			}
			if (initVelocity > 1500){
				initVelocity = 800;
			}
		}
		os_mut_release(&selectTask3);
		os_sem_send(&updateLock);
		os_tsk_pass();
	}
}
__task void taskSelectScreen(void){
	while(1){
		os_mut_wait(&selectTask3, 0xffff);
		if(updateScreen &!luckFlag){
			updateScreen =0;
			updateStatsSelectScreen(initVelocity,XYAngle,XZAngle);
			drawSelectScreenBottom (score,shotsTaken);
			updateAngleSelectScreen(XYAngle,XZAngle,shotsTaken/3);
		}
		else if (updateScreen &luckFlag){
			
		}
		os_mut_release(&luckTask1);
	}
}

uint16_t shotCalculation(){
	double vXY, vZ,time,vX,vY,xPos,yPos,c1,c2;
	const double R_HOOP = 0.2286;// This is the radius of the hoop
	vXY = initVelocity /100 * cos(XZAngle*3.1415/180);
	vZ = initVelocity /100 * sin(XZAngle*3.1415/180);
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
void ledLogic(int incr){
	uint32_t spin =0;
	printf("\n%d,%d",led_num_display_index, led_success);
	if (incr >= LED_SPEED){
		led_num_display_index = led_num_display_index +1;
		led_num_display_index = led_num_display_index%8;
		setLED(led_num_display[led_num_display_index]);
		for(spin =0; spin< 800000; spin++ ); 
		incr=0;
	}
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

__task void taskLuckLEDAndButton(void){
	int i =0;
	uint16_t shotQuality =0;
	while(1){
		os_mut_wait(&luckTask1, 0xffff);
		if (ButtonCurrentlyPressed()& !luckFlag){
			buttonPressed =1;
		}
		else if(buttonPressed & !ButtonCurrentlyPressed() & !luckFlag){
			luckFlag =1;
			shotQuality = shotCalculation();
			//shotQuality = GOOD_SHOT;
			luckPhasePrep(shotQuality);
			buttonPressed =0;
			for(i =0; i< 10000;i++){}
				setLED(0);
		}
		if(luckFlag ){
				if(ButtonCurrentlyPressed() || !buttonPressed){
					ledLogic(incr);
					incr ++;
				}
				if(ButtonCurrentlyPressed()){
					buttonPressed =1;
				}
				if(buttonPressed & !ButtonCurrentlyPressed()){
					ledResult();
					if(shotsTaken <MAX_SHOTS){
						luckFlag =0;
						buttonPressed =0;
						updateScreen =1;
						shotAnimation(shotAnimationStatus);
						while(!ButtonCurrentlyPressed()){}
						while(ButtonCurrentlyPressed()){}
						clearScreen();
					}
					else{
						finalAnimation(score);
					}
				}
		}
		os_mut_release(&selectTask1);
		os_sem_send(&updateLock);
		os_tsk_pass();
	}	
}

__task void Start_task(void){
	//Initialize semaphores and set the first one to one
	os_mut_init(&selectTask1);
	os_mut_init(&selectTask2);
	os_mut_init(&selectTask3);
	os_mut_init(&selectTask4);
	os_sem_init(&updateLock,1);

	// create all the other tasks
	//initIOControls();
	os_tsk_create(taskUpdateAngles, 1);
	os_tsk_create(taskSelectButton, 1);
	os_tsk_create(taskSelectScreen, 1);
	os_tsk_create(taskLuckLEDAndButton, 1);
	
	// delete this task when done
	os_tsk_delete_self();
}

void initialize(void){
	//Done
	SystemInit();
	GLCD_Init();
	GLCD_Clear(White);
	GLCD_SetBackColor(White);
	playerPosition[0] = xPositions[0];
	playerPosition[1] = yPositions[0];
	GLCD_DisplayString(30,0, 1,"Press Int0 to Begin!");
	//Put in a bit about the rules and a quick briefer*/
}
int main(void){
	printf("Starting\n");
	initialize();
	while(!ButtonCurrentlyPressed()){}
	while(ButtonCurrentlyPressed()){}
	clearScreen();
	//Create and initialize Start Task
	os_sys_init(Start_task);

	return 0;
}
	




