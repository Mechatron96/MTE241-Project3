#include "IOControls.h"
#include "stdio.h"
#include <stdint.h>
#include <LPC17xx.h>
#include <RTL.h>

const int ADCMIN = 18;
const int ADCMAX = 4093;


void setLED(int input){
	LPC_GPIO1->FIOCLR = 0xFFFF<<28;
	LPC_GPIO2->FIOCLR = 0xFFFF<<2;
	LPC_GPIO2->FIOCLR = 0xFFFF<<5;
  //Initializing GPIO 1 - mask bits 28, 29 and 31 of port 1
  LPC_GPIO1->FIODIR |= (1<<28);
	LPC_GPIO1->FIODIR |= (1<<29);
	LPC_GPIO1->FIODIR |= (1<<31);
  // LPC_GPIO1->FIODIR = (0xBO << 24);
  //Initializing GPIO 2 - mask bit 2 to 6 of port 2
  LPC_GPIO2->FIODIR |= 0x0000007C;

  // , 29, and 31
  if (input %2) LPC_GPIO2->FIOSET |= (0x1<<6);
	input = input>>1;
  if (input %2) LPC_GPIO2->FIOSET |= (0x1<<5);
	input = input>>1;
  if (input %2) LPC_GPIO2->FIOSET |= (0x1<<4);
	input = input>>1;
  if (input %2) LPC_GPIO2->FIOSET |= (0x1<<3);
	input = input>>1;
  if (input %2) LPC_GPIO2->FIOSET |= (0x1<<2);
	input = input>>1;
  if (input %2) LPC_GPIO1->FIOSET |= (0x1<<31);
	input = input>>1;
  if (input %2) LPC_GPIO1->FIOSET |= (0x1<<29);
	input = input>>1;
  if (input %2) LPC_GPIO1->FIOSET |= (0x1<<28);
	input = input>>1;
}

int checkPotentiometer(void){
	int value = 0;
	float XYAngle = 0;
	LPC_PINCON->PINSEL1 &= ~(3<<18);
	LPC_PINCON->PINSEL1 |= (1<<18); // P0.25 is AD0.2
	LPC_SC->PCONP |= (1<<12); // Enable power to ADC block
	LPC_ADC->ADCR = (1<<2) | // select AD0.2 pin
	(4<<8) | // ADC clock is 25MHz/5
	(1<<21); // enable ADC

	
	LPC_ADC->ADCR |= (1<<24);
	

	while (LPC_ADC->ADGDR & 0x8000 == 0); // wait for conversion complete
	value = (LPC_ADC->ADGDR>>4) & 0xFFF; // read result
		
	XYAngle = (0 + ((value - ADCMIN)*(360-0))/(ADCMAX-ADCMIN));	
	return XYAngle;
}

int checkJoyStick(int XZAngle){
	//edit the angle from horizontal using this function. 
	//Want an angle between 0 and 90 with 0 being the positive x Axis
	//The up and down directions adjust the angle from ground of the shot 
	//Up will increase the angle and down will decrease the angle of the shot
	//The left and right directions don't do anything 
	uint32_t joyStick = 0x0;

		joyStick = ~(LPC_GPIO1->FIOPIN);
    if (((joyStick & 0x02<<23) == (0x02<<23)) && (XZAngle <= 89)){
   		XZAngle = XZAngle + 1.0;
       //JoyStick Up 
    }
    else if(((joyStick & 0x08<<23) == (0x08<<23)) && (XZAngle >= 1)){
    	XZAngle = XZAngle - 1.0;
    	//JoyStick Down

    } else{
    	//JoyStick input other than Up or Down.
    }
    return XZAngle;
}

int ButtonCurrentlyPressed(void){
	//Returns 1 for button pressed and 0 for no button pressed
	if ((LPC_GPIO2->FIOPIN>>10)==(0x0E)){
		return 1;
	}
	return 0;
}
