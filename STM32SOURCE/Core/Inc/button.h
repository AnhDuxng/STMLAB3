/*
 * button.h
 *
 *  Created on: Nov 13, 2023
 *      Author: anhdu
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE	GPIO_PIN_SET
#define PRESSED_STATE	GPIO_PIN_RESET

#include "main.h"

void getKeyInputMODE();
void getKeyInputTIME();
void getKeyInputSET();

int MODE_PRESSED();
int TIME_PRESSED();
int SET_PRESSED();

#endif /* INC_BUTTON_H_ */
