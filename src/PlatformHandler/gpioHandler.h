/*
 * gpioHandler.h
 *
 *  Created on: 2018. 7. 24.
 *      Author: james
 */

#ifndef PLATFORMHANDLER_GPIOHANDLER_H_
#define PLATFORMHANDLER_GPIOHANDLER_H_


#include "stm32f10x_gpio.h"

void GPIO_Configuration(void);

void Reset_W5300(void);
void delay(uint32_t nCount);

#endif /* PLATFORMHANDLER_GPIOHANDLER_H_ */
