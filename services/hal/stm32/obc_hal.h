#ifndef __OBC_HAL_H
#define __OBC_HAL_H

#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "../../services.h"

//ToDo
//  improve return types
//  need to make the change from the two different typedefs

extern UART_HandleTypeDef huart2;

void HAL_obc_SD_ON();

void HAL_obc_SD_OFF();

void HAL_eps_uart_tx(uint8_t *buf, uint16_t size);

SAT_returnState HAL_eps_uart_rx(uint8_t *c);

#endif