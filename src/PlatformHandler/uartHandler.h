/*
 * uartHanlder.h
 *
 *  Created on: 2018. 7. 25.
 *      Author: james
 */

#ifndef PLATFORMHANDLER_UARTHANDLER_H_
#define PLATFORMHANDLER_UARTHANDLER_H_


#include "stm32f10x_usart.h"

void Debug_USART_Configuration(void);
void USART_Configuration(uint8_t ch);
uint8_t uart_putc(USART_TypeDef* UARTx, uint8_t ch);
void uart_puts(USART_TypeDef* UARTx, uint8_t *buf);

#endif /* PLATFORMHANDLER_UARTHANDLER_H_ */
