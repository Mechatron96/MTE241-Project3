#ifndef IOCONTROLS_H
#define IOCONTROLS_H

void initIOControls(void);
void setLED(int);
int checkPotentiometer(void);
int checkJoyStick(int);
int ButtonCurrentlyPressed(void);

#endif
