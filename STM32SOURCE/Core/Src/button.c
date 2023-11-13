/*
 * button.c
 *
 *  Created on: Nov 13, 2023
 *      Author: anhdu
 */

#include "button.h"

int KeyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int MODE_flag = 0;
int TIME_flag = 0;
int SET_flag = 0;

int MODE_PRESSED() {
	if (MODE_flag == 1) {
		MODE_flag = 0;
		return 1;
	}
	return 0;
}

int TIME_PRESSED() {
	if (TIME_flag == 1) {
		TIME_flag = 0;
		return 1;
	}
	return 0;
}

int SET_PRESSED() {
	if (SET_flag == 1) {
		SET_flag = 0;
		return 1;
	}
	return 0;
}


void setKeyReg2(int i) {
	if (i == 0) KeyReg2[i] = HAL_GPIO_ReadPin(BUTTON_MODE_GPIO_Port, BUTTON_MODE_Pin);
	if (i == 1) KeyReg2[i] = HAL_GPIO_ReadPin(BUTTON_TIME_GPIO_Port, BUTTON_TIME_Pin);
	if (i == 2) KeyReg2[i] = HAL_GPIO_ReadPin(BUTTON_SET_GPIO_Port, BUTTON_SET_Pin);
}

void setFlag(int i) {
	if (i == 0) MODE_flag = 1;
	if (i == 1) TIME_flag = 1;
	if (i == 2) SET_flag = 1;
}


void getKeyInput() {

	for (int i = 0; i < 3; i++) {
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
	}


	for (int i = 0; i < 3; i++) {
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];

		setKeyReg2(i);


		if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])) {
			if (KeyReg3[i] != KeyReg2[i]) {
				KeyReg3[i] = KeyReg2[i];
				if (KeyReg2[i] == NORMAL_STATE) {
					setFlag(i);
				}
			}
		}
	}
}
