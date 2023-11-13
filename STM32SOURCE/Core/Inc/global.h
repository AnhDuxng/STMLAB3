/*
 * global.h
 *
 *  Created on: Nov 13, 2023
 *      Author: anhdu
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define RESET 0
#define STATE_MODE_1 1
#define STATE_MODE_2 2
#define STATE_MODE_3 3
#define STATE_MODE_4 4

extern int status;

extern int time7SEG0;
extern int time7SEG1;

extern int timeRed;
extern int timeGreen;
extern int timeYellow;

extern int SEG_buffer[4];

void updateSEGBuffer(int s0, int s1, int s2, int s3);
void update7SEG(int index);

#endif /* INC_GLOBAL_H_ */
