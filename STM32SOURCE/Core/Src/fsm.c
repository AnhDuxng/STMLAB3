/*
 * fsm.c
 *
 *  Created on: Nov 13, 2023
 *      Author: anhdu
 */

#include "fsm.h"

int total_time = 0;
int light1_counter = 0;
int light2_counter = 0;
int s1 = 0, s3 = 0;
int tempRed = 0, tempYellow = 0, tempGreen = 0;

void fsm_run() {
	switch (status) {
	case RESET:

		setTimer1(30);
		setTimer2(40);

		status = STATE_MODE_1;
		tempRed = timeRed;
		tempGreen = timeGreen;
		tempYellow = timeYellow;

		HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);

		light1_counter = 0;
		light2_counter = 0;

		break;
	case STATE_MODE_1:
		total_time = timeRed + timeGreen + timeYellow;
		if (light1_counter == 0) light1_counter = total_time;
		if (light2_counter == 0) light2_counter = total_time;

		if (timeRed < light1_counter && light1_counter <= total_time) {
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, GPIO_PIN_SET);
			s1 = light1_counter - timeRed;
		}
		else if (timeYellow < light1_counter && light1_counter <= timeRed) {
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, GPIO_PIN_SET);
			s1 = light1_counter - timeYellow;
		}
		else if (0 < light1_counter && light1_counter <= timeYellow) {
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, GPIO_PIN_RESET);
			s1 = light1_counter;
		}

		if (timeRed + timeYellow < light2_counter && light2_counter <= total_time) {
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
			s3 = light2_counter - timeRed - timeYellow;
		}
		else if (timeRed < light2_counter && light2_counter <= timeRed + timeYellow) {
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
			s3 = light2_counter - timeRed;
		}
		else if (0 < light2_counter && light2_counter <= timeRed) {
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
			s3 = light2_counter;
		}



		updateSEGBuffer(s1/10, s1%10, s3/10, s3%10);

		if (timer1_flag == 1) {
			light1_counter--;
			light2_counter--;
			setTimer1(1000);
		}



		if (MODE_PRESSED() == 1) {
			status = STATE_MODE_2;
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, GPIO_PIN_SET);
		}
		break;
	case STATE_MODE_2:
		updateSEGBuffer(0, 2, tempRed / 10, tempRed % 10);

		if (timer2_flag == 1) {
			HAL_GPIO_TogglePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin);
			HAL_GPIO_TogglePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
			setTimer2(250);
		}


		if (MODE_PRESSED() == 1) {
			status = STATE_MODE_3;
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, GPIO_PIN_SET);
		}

		if (TIME_PRESSED() == 1) {
			tempRed++;
			if (tempRed > 99) tempRed = 0;
		}

		if (SET_PRESSED() == 1) {
			timeRed = tempRed;
		}
		break;
	case STATE_MODE_3:
		updateSEGBuffer(0, 3, tempYellow / 10, tempYellow % 10);

		if (timer2_flag == 1) {
			HAL_GPIO_TogglePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
			setTimer2(250);
		}

		if (MODE_PRESSED() == 1) {
			status = STATE_MODE_4;
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, GPIO_PIN_SET);
		}

		if (TIME_PRESSED() == 1) {
			tempYellow++;
			if (tempYellow > 99) tempYellow = 0;
		}

		if (SET_PRESSED() == 1) {
			timeYellow = tempYellow;
		}
		break;
	case STATE_MODE_4:
		updateSEGBuffer(0, 4, tempGreen / 10, tempGreen % 10);

		if (timer2_flag == 1) {
			HAL_GPIO_TogglePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin);
			HAL_GPIO_TogglePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
			setTimer2(250);
		}

		if (MODE_PRESSED() == 1) {
			status = RESET;
		}

		if (TIME_PRESSED() == 1) {
			tempGreen++;
			if (tempGreen > 99) tempGreen = 0;
		}

		if (SET_PRESSED() == 1) {
			timeGreen = tempGreen;
		}
		break;
	default:
		break;
	}
}

