#include "nbaGraphics.h"
#include "stdio.h"
#include <stdint.h>
#include "GLCD.h"
#include "uart.h"

//TODO get the bitmaps for these HOLY SHIT THIS WILL SUCK ONLY These have to be like 8 by 8
uint8_t topDown0 [] = [];
//uint8_t topDown45 [] = [];
uint8_t topDown90 [] = [];
//uint8_t topDown105 [] = [];
uint8_t topDown180 [] = [];
//uint8_t topDown225 [] = [];
uint8_t topDown270 [] = [];
//uint8_t topDown315 [] = [];

uint8_t netTopDown [] = [];

uint8_t netSide [] = [];

uint8_t sidePlayer [] = [];

const double xPositions[5] = {0, -5.12, -7.24, -5.12,0}; // @ 90, 135, 180, 225 and 270 from +x axis
const double yPositions[5] = {6.71, 5.12,0,-5.12,-6.71};


void updateAngleSelectScreen(int XYAngle,int XZAngle, int playerPosition){ // this updates the part of the screen which displays the players
	//TODO make different sprites for intervals of 45 degrees. For XY and XZ Also display the 
	int XYInterval;
	int XZInterval;
	int drawXYSpriteX =0;
	int drawXYSpriteY =0;
	int drawXZSpriteX =0;
	int drawXZSpriteY =0;

	XYInterval = (2.5 + XYAngle)/15;
	XZInterval = (2.5 + XZAngle)/15;
	//playerPosition this is shotsTaken%3
	switch(playerPosition){
		case 0:
			drawXYSpriteX = something;
			drawXYSpriteY = something;
			drawXZSpriteX = something;
			drawXZSpriteY =something;
		break; //TODO FILL IN THE REST OF THESE
		case 1:
		break;
		case 2:
		break;
		case 3:
		break;
		case 4:
		break;
	}
	
	switch (XYInterval){
		case 0: // draw based on angle
			GLCD GLCD_Bitmap(drawXYSpriteX,drawXYSpriteY,64,47, topDown0);
			break;
	}
	switch (XZInterval){
		case 0: // draw based on angle
			GLCD GLCD_Bitmap(drawXYSpriteX,drawXYSpriteY,64,47, topDown0);
			break;
	}
	// STORE ANGLES FROM 0-90 and for 90-360, flip or rotate by 90 the different sprites. 
}
void updatePowerSelectScreen(double initVelocity,int XYAngle,int XZAngle){ // this updates the top part of the screen when powerbar
	// display numbers and shit
}
void drawSelectScreenBottom(int score, int shotsTaken){
	//basically displays the bottom 
}
void shotAnimation(int animationNumber){
	switch (animationNumber){
		case 0:
			//Ball didn't come close SAY MISS
		break;
		case 1:
			//ball bounced out AWWWWWWWWW SOOOOOO CLOSE!
		break;
		case 2:
			//ball bounced in; AND OFF THE BACKBOARD!
		break;
		case 3:
			//ball went straight in; SPLASHHHHH!!!
		break;
	}
}
void finalAnimation(int finalScore){
	// Have some text that reads out your score
}

void initialize(void){
	GLCD_SetBackColor(White);
	GLCD_SetTextColor(Black);
	
	//Put in a bit about the rules and a quick briefer
}
