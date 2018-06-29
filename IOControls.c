#include "IOControls.h"

const int ADCMIN = 0;
const int ADCMAX = 6424;

void initIOControls(void){
	//Initizing all registers for potentiometer and button
	//Setting Up Potentiometer
	LPC_PINCON->PINSEL1 &= ~(3<<18);
	LPC_PINCON->PINSEL1 |= (1<<18); // P0.25 is AD0.2
	LPC_SC->PCONP |= (1<<12); // Enable power to ADC block
	LPC_ADC->ADCR = (1 << 2) | // ADC clock is 25 MHz
					(4 << 8) | // ADC clock is 25MHz
					(1 << 12); // Enable ADC
	// No Settings for JoyStick and button, by default there all inputs


}

float checkPotentiometer(void){
	//Want an angle between 0 and 360 with 0 being the positive x 
	LPC_SC->PCNP |= (1<<12); //Enable power to ADC block
	LPC_ADC |= (1<<24); //Set to capture data

	while(LPC_ADC->ADGDR & 0x8000 == 0); // wait for conversion complete
	value = (LPC_ADC->ADGDR>>4) & 0xFFF; //read result
	//Map value to 0 to 360 degrees
	return (0.0 + ((value-ADCMIN)*(360.0-0.0))/(ADCMAX-ADCMIN));
}

float checkJoyStick(float XZAngle){
	//edit the angle from horizontal using this function. 
	//Want an angle between 0 and 90 with 0 being the positive x Axis
	//The up and down directions adjust the angle from ground of the shot 
	//Up will increase the angle and down will decrease the angle of the shot
	//The left and right directions don't do anything 
	uint32_t joyStick = 0x0;
    if ((joyStick & 0x02<<23) == (0x02<<23)) && (XZAngle=< 360.0){
   		XZAngle = XZAngle + 0.1;
       //JoyStick Up 
    }
    else if((joyStick & 0x08<<23) == (0x08<<23)) && (XZAngle => 0.0){
    	XZAngle = XZAngle - 0.1;
    	//JoyStick Down

    }
    else{
    	//JoyStick input other than Up or Down.
    }
    return XZAngle;



}

int ButtonCurrentlyPressed(void){
	//Returns 1 for button pressed and 0 for no button pressed
	return ~(LPC_GPIO2->FIOPIN & (1<<10))
}