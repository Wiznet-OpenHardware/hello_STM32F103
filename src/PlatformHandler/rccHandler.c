/*
 * rccHandler.c
 *
 *  Created on: 2018. 7. 24.
 *      Author: james
 */

#include "rccHandler.h"


void RCC_Configuration(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2 | RCC_APB1Periph_TIM3 | RCC_APB1Periph_USART2
			| RCC_APB1Periph_USART3 | RCC_APB1Periph_UART4 | RCC_APB1Periph_UART5, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC |
			RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOE | RCC_APB2Periph_GPIOF |
			RCC_APB2Periph_GPIOG | RCC_APB2Periph_AFIO | RCC_APB2Periph_USART1, ENABLE );
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_FSMC, ENABLE);
}
