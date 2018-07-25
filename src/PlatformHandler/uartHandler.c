/*
 * uartHandler.c
 *
 *  Created on: 2018. 7. 25.
 *      Author: james
 */

#include "common.h"
#include "uartHandler.h"

void Debug_USART_Configuration(void)
{
	USART_InitTypeDef USART_InitStructure;
	USART_ClockInitTypeDef USART_ClockInitStruct;

	USART_InitStructure.USART_BaudRate = 115200;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	USART_ClockInitStruct.USART_Clock = USART_Clock_Disable;
	USART_ClockInitStruct.USART_CPOL = USART_CPOL_Low;
	USART_ClockInitStruct.USART_CPHA = USART_CPHA_2Edge;
	USART_ClockInitStruct.USART_LastBit = USART_LastBit_Disable;

	USART_Init(USART2, &USART_InitStructure);
	USART_Cmd(USART2, ENABLE);
}

void USART_Configuration(uint8_t ch)
{
	USART_InitTypeDef USART_InitStructure;
	USART_ClockInitTypeDef USART_ClockInitStruct;

	USART_InitStructure.USART_BaudRate = 115200;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	USART_ClockInitStruct.USART_Clock = USART_Clock_Disable;
	USART_ClockInitStruct.USART_CPOL = USART_CPOL_Low;
	USART_ClockInitStruct.USART_CPHA = USART_CPHA_2Edge;
	USART_ClockInitStruct.USART_LastBit = USART_LastBit_Disable;

	if(ch == CH1)
	{
		USART_Init(USART1, &USART_InitStructure);
		USART_Cmd(USART1, ENABLE);
	}else if(ch == CH2)
	{
		USART_Init(USART3, &USART_InitStructure);
		USART_Cmd(USART3, ENABLE);
	}else if(ch == CH3)
	{
		USART_Init(UART4, &USART_InitStructure);
		USART_Cmd(UART4, ENABLE);
	}else if (ch == CH4)
	{
		USART_Init(UART5, &USART_InitStructure);
		USART_Cmd(UART5, ENABLE);
	}

}

uint8_t uart_putc(USART_TypeDef* UARTx, uint8_t ch)
{
    USART_SendData(UARTx, (uint16_t)ch);

    while(USART_GetFlagStatus(UARTx, USART_FLAG_TXE) == RESET);

    return (ch);
}

void uart_puts(USART_TypeDef* UARTx, uint8_t *buf)
{
	uint16_t i = 0;

	while(buf[i] != 0)
		uart_putc(UARTx, buf[i++]);
}
