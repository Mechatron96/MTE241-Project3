#ifndef IOCONTROLS_H
#define IOCONTROLS_H

void initIOControls(void);
void setLED(int);
float checkPotentiometer(void);
float checkJoyStick(float);
int ButtonCurrentlyPressed(void);

#endif
