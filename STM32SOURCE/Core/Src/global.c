/*
 * global.c
 *
 *  Created on: Nov 13, 2023
 *      Author: anhdu
 */

#include "global.h"

void display7SEG0(int num) {
	if (num == 0) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 1);
	}
	else if (num == 1) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 1);
	}
	else if (num == 2) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 0);
	}
	else if (num == 3) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 0);
	}
	else if (num == 4) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 0);
	}
	else if (num == 5) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 0);
	}
	else if (num == 6) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 0);
	}
	else if (num == 7) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 1);
	}
	else if (num == 8) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 0);
	}
	else if (num == 9) {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 0);
	}
	else {
		HAL_GPIO_WritePin(SEG_A_0_GPIO_Port, SEG_A_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_0_GPIO_Port, SEG_B_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_0_GPIO_Port, SEG_C_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_D_0_GPIO_Port, SEG_D_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_0_GPIO_Port, SEG_E_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_0_GPIO_Port, SEG_F_0_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_0_GPIO_Port, SEG_G_0_Pin, 1);
	}
}

void display7SEG1(int num) {
	if (num == 0) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 1);
	}
	else if (num == 1) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 1);
	}
	else if (num == 2) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 0);
	}
	else if (num == 3) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 0);
	}
	else if (num == 4) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 0);
	}
	else if (num == 5) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 0);
	}
	else if (num == 6) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 0);
	}
	else if (num == 7) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 1);
	}
	else if (num == 8) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 0);
	}
	else if (num == 9) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 0);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 0);
	}
	else {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_E_1_GPIO_Port, SEG_E_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_F_1_GPIO_Port, SEG_F_1_Pin, 1);
		HAL_GPIO_WritePin(SEG_G_1_GPIO_Port, SEG_G_1_Pin, 1);
	}
}


int status = 0;

int time7SEG0 = 0;
int time7SEG1 = 0;

int timeRed = 5;
int timeGreen = 3;
int timeYellow = 2;

int SEG_buffer[4] = {0, 0, 0, 0};


void updateSEGBuffer(int s0, int s1, int s2, int s3) {
	SEG_buffer[0] = s0;
	SEG_buffer[1] = s1;
	SEG_buffer[2] = s2;
	SEG_buffer[3] = s3;
}

void update7SEG(int index) {
	switch (index) {
	case 0:
		display7SEG0(SEG_buffer[0]);
		display7SEG1(SEG_buffer[1]);
		HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, GPIO_PIN_SET);
		break;
	case 1:
		display7SEG0(SEG_buffer[2]);
		display7SEG1(SEG_buffer[3]);
		HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}
