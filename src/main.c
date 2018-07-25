/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_usart.h"
#include "rccHandler.h"
#include "nvicHandler.h"
#include "gpioHandler.h"
#include "timerHandler.h"
#include "uartHandler.h"
#include "fsmcHandler.h"
#include "common.h"

// ----------------------------------------------------------------------------
//
// Standalone STM32F1 empty sample (trace via NONE).
//
// Trace support is enabled by adding the TRACE macro definition.
// By default the trace messages are forwarded to the NONE output,
// but can be rerouted to any device or completely suppressed, by
// changing the definitions required in system/src/diag/trace_impl.c
// (currently OS_USE_TRACE_ITM, OS_USE_TRACE_SEMIHOSTING_DEBUG/_STDOUT).
//

// ----- main() ---------------------------------------------------------------

// Sample pragmas to cope with warnings. Please note the related line at
// the end of this function, used to pop the compiler diagnostics status.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"


//int putchar(int ch)
//{
//    USART_SendData(USART2, (uint16_t)ch);
//
//    while(USART_GetFlagStatus(USART2, USART_FLAG_TXE) == RESET);
//
//    return (ch);
//}

int
main(int argc, char* argv[])
{
/*
	// At this stage the system clock should have already been configured
	// at high speed.
	// enable clock for GPIOA and GPIOC
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB, ENABLE);

	// set PA5 as GPIO out
	GPIO_InitTypeDef gpioInitStruct;
	GPIO_StructInit(&gpioInitStruct);
	gpioInitStruct.GPIO_Pin = GPIO_Pin_5;
	gpioInitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	gpioInitStruct.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(GPIOB, &gpioInitStruct);

	//serial comm
	// USART2
	// enable clock for USART2
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);

	// init tx
	gpioInitStruct.GPIO_Pin = GPIO_Pin_2;
	gpioInitStruct.GPIO_Mode = GPIO_Mode_AF_PP;
	gpioInitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &gpioInitStruct);

	// init rx
	gpioInitStruct.GPIO_Pin = GPIO_Pin_3;
	gpioInitStruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOA, &gpioInitStruct);


	// setup USART2
	USART_InitTypeDef usartInitStruct;
	USART_StructInit(&usartInitStruct);

	usartInitStruct.USART_BaudRate = 115200;
	usartInitStruct.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	USART_Init(USART2, &usartInitStruct);
	USART_Cmd(USART2, ENABLE);
	// Infinite loop
*/
	uint16_t curTime, tmpTime;
	uint8_t i;


	RCC_Configuration();
	NVIC_Configuration();
	GPIO_Configuration();
	FSMC_Configuratino();
	Reset_W5300();
	Debug_USART_Configuration();
	Timer_Configuration();
	for(i=0; i<4; i++)
		USART_Configuration(i);

	uart_putc(USART2, 'H');
	uart_putc(USART2, 'e');
	uart_putc(USART2, 'l');
	uart_putc(USART2, 'l');
	uart_putc(USART2, 'o');
	uart_putc(USART2, '\r');
	uart_putc(USART2, '\n');

	printf("Hello again\r\n");

	curTime = 0;
	setDevtime(curTime);

	while (1)
    {
		if((tmpTime = getDevtime()) != curTime)
		{
			curTime = tmpTime;
			printf("Second %d\r\n", curTime);
			uart_puts(USART1, "hello, uart1\r\n");
			uart_puts(USART3, "hello, uart3\r\n");
			uart_puts(UART4, "hello, uart4\r\n");
			uart_puts(UART5, "hello, uart5\r\n");
		}
		// Add your code here.
    }
}

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
