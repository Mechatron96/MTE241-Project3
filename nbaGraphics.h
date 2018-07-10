#ifndef NBAGRAPHICS_H
#define NBAGRAPHICS_H

void updateAngleSelectScreen(int, int,int);
void updatePowerSelectScreen(double,int,int);
void drawSelectScreenBottom(int, int);
void shotAnimation(int);
void finalAnimation(int);
void initialize(void);

extern const double xPositions[5];
extern const double yPositions[5];

#endif
