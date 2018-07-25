/*
 * gpioHandler.c
 *
 *  Created on: 2018. 7. 24.
 *      Author: james
 */

#include "stm32f10x_board.h"
#include "gpioHandler.h"

void GPIO_Configuration(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	/* Disable the Serial Wire Jtag Debug Port SWJ-DP */ // Why?
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_Disable, ENABLE);

	/* Configure GPIO ports for Port A */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = UART1_TX_PIN | UART2_TX_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(UART1_TX_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = UART1_RTS_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(UART1_RTS_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = UART1_RX_PIN | UART1_RX_PIN | UART1_CTS_PIN;
	GPIO_Init(UART1_RX_PORT, &GPIO_InitStructure);

	/* Configure GPIO ports for Port B */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = UART3_TX_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(UART3_TX_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = UART3_RTS_PIN | STATUS_1_PIN | STATUS_3_PIN | STATUS_4_PIN | STATUS_5_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(UART3_RTS_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = UART3_RX_PIN | UART3_CTS_PIN ;
	GPIO_Init(UART3_CTS_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin = HW_TRIGGER_PIN;
	GPIO_Init(HW_TRIGGER_PORT, &GPIO_InitStructure);

	/* Configure GPIO ports for Port C */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = UART4_TX_PIN | UART5_TX_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(UART4_TX_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = UART4_RX_PIN | UART4_CTS_PIN;
	GPIO_Init(UART4_RX_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin = LINK_LED_PIN | TX_LED_PIN | RX_LED_PIN ;
	GPIO_Init(LINK_LED_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = UART4_RTS_PIN | ACT_LED_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(UART4_RTS_PORT, &GPIO_InitStructure);

	/* Configure GPIO ports for Port D */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = UART5_RX_PIN;
	GPIO_Init(UART5_RX_PORT, &GPIO_InitStructure);

	/* Configure GPIO ports for Port F */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = DEBUG_LED_PIN | RESET_W5300_PIN;
	GPIO_Init(DEBUG_LED_PORT, &GPIO_InitStructure);

	/* Configure GPIO ports for Port G */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = UART5_CTS_PIN;
	GPIO_Init(UART5_CTS_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = UART5_RTS_PIN;
	GPIO_Init(UART5_RTS_PORT, &GPIO_InitStructure);

	/* SRAM Data Line Configuration */
	/* Port D */
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_8 | GPIO_Pin_9
			| GPIO_Pin_10 | GPIO_Pin_14 | GPIO_Pin_15 ;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(UART5_RX_PORT, &GPIO_InitStructure);

	/* Port E */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9 | GPIO_Pin_10
			| GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15 ;
	GPIO_Init(GPIOE, &GPIO_InitStructure);

	/* Port F */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3
			| GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15 ;
	GPIO_Init(GPIOF, &GPIO_InitStructure);

	/* NOE and NWE Configuration */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5 ;
	GPIO_Init(GPIOD, &GPIO_InitStructure);

	/* NE3 Configuration */
	GPIO_InitStructure.GPIO_Pin = CS_W5300_PIN ;
	GPIO_Init(CS_W5300_PORT, &GPIO_InitStructure);
}
