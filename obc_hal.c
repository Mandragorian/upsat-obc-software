#include "obc_hal.h"

void HAL_obc_SD_ON() {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);	
}

void HAL_obc_SD_OFF() {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);
}


