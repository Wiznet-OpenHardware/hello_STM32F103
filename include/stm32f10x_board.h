/*
 * stm32f10x_board.h
 *
 *  Created on: 2018. 7. 24.
 *      Author: james
 */

#ifndef STM32F10X_BOARD_H_
#define STM32F10X_BOARD_H_


#define DEVICE_BOARD_NAME	WIZ140SR

#ifdef DEVICE_BOARD_NAME
	#if (DEVICE_BOARD_NAME == WIZ140SR)
		#define __STM32F103__
		#define __W5300__	// RS-232/TTL or RS-422/485 selector using UART IF selector pin
	#endif
#else
	#define __USE_APPBACKUP_AREA__
    #define __USE_SAFE_SAVE__
	#define DEVICE_CLOCK_SELECT	             CLOCK_SOURCE_INTERNAL
	#define DEVICE_PLL_SOURCE_CLOCK          PLL_SOURCE_8MHz
	#define DEVICE_TARGET_SYSTEM_CLOCK       SYSTEM_CLOCK_48MHz
	#define DEVICE_BOARD_NAME                UNKNOWN_DEVICE
	#define DEVICE_ID_DEFAULT                "UNKNOWN"
#endif

#define DEVICE_UART_CNT		4 // Not used


////////////////////////////////
// Pin definitions			  //
////////////////////////////////
#if (DEVICE_BOARD_NAME == WIZ140SR) // ##20161031 WIZ750SR-1xx

	/* Port A */
	#define UART2_TX_PIN				GPIO_Pin_2
	#define UART2_TX_PORT				GPIOA
	#define UART2_TX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART2_RX_PIN				GPIO_Pin_3
	#define UART2_RX_PORT				GPIOA
	#define UART2_RX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART1_TX_PIN				GPIO_Pin_9
	#define UART1_TX_PORT				GPIOA
	#define UART1_TX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART1_RX_PIN				GPIO_Pin_10
	#define UART1_RX_PORT				GPIOA
	#define UART1_RX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART1_CTS_PIN				GPIO_Pin_11
	#define UART1_CTS_PORT				GPIOA
	#define UART1_CTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART1_RTS_PIN				GPIO_Pin_12
	#define UART1_RTS_PORT				GPIOA
	#define UART1_RTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	/* Port B */
	#define HW_TRIGGER_PIN				GPIO_Pin_0
	#define HW_TRIGGER_PORT				GPIOB
	#define HW_TRIGGER_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define STATUS_1_PIN				GPIO_Pin_5
	#define STATUS_1_PORT				GPIOB
	#define STATUS_1_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define STATUS_3_PIN				GPIO_Pin_6
	#define STATUS_3_PORT				GPIOB
	#define STATUS_3_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define STATUS_4_PIN				GPIO_Pin_7
	#define STATUS_4_PORT				GPIOB
	#define STATUS_4_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define STATUS_5_PIN				GPIO_Pin_8
	#define STATUS_5_PORT				GPIOB
	#define STATUS_5_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART3_TX_PIN				GPIO_Pin_10
	#define UART3_TX_PORT				GPIOB
	#define UART3_TX_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART3_RX_PIN				GPIO_Pin_11
	#define UART3_RX_PORT				GPIOB
	#define UART3_RX_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART3_CTS_PIN				GPIO_Pin_13
	#define UART3_CTS_PORT				GPIOB
	#define UART3_CTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART3_RTS_PIN				GPIO_Pin_14
	#define UART3_RTS_PORT				GPIOB
	#define UART3_RTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	/* Port C */
	#define INT_W5300_PIN				GPIO_Pin_0
	#define INT_W5300_PORT				GPIOC
	#define INT_W5300_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define LINK_LED_PIN				GPIO_Pin_1
	#define LINK_LED_PORT				GPIOC
	#define LINK_LED_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define TX_LED_PIN					GPIO_Pin_2
	#define TX_LED_PORT					GPIOC
	#define TX_LED_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define RX_LED_PIN					GPIO_Pin_3
	#define RX_LED_PORT					GPIOC
	#define RX_LED_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define ACT_LED_PIN					GPIO_Pin_4
	#define ACT_LED_PORT				GPIOC
	#define ACT_LED_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART4_TX_PIN				GPIO_Pin_10
	#define UART4_TX_PORT				GPIOC
	#define UART4_TX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART4_RX_PIN				GPIO_Pin_11
	#define UART4_RX_PORT				GPIOC
	#define UART4_RX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART4_CTS_PIN				GPIO_Pin_8
	#define UART4_CTS_PORT				GPIOC
	#define UART4_CTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART4_RTS_PIN				GPIO_Pin_9
	#define UART4_RTS_PORT				GPIOC
	#define UART4_RTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART5_TX_PIN				GPIO_Pin_12
	#define UART5_TX_PORT				GPIOC
	#define UART5_TX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define SW_INPUT_PIN				GPIO_Pin_13
	#define SW_INPUT_PORT				GPIOC
	#define SW_INPUT_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	/* Port D */
	#define UART5_RX_PIN				GPIO_Pin_2
	#define UART5_RX_PORT				GPIOD
	#define UART5_RX_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	/* Port F */
	#define RESET_W5300_PIN				GPIO_Pin_6
	#define RESET_W5300_PORT			GPIOF
	#define RESET_W5300_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define DEBUG_LED_PIN				GPIO_Pin_7
	#define DEBUG_LED_PORT				GPIOF
	#define DEBUG_LED_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	/* Port G */
	#define CS_W5300_PIN				GPIO_Pin_10
	#define CS_W5300_PORT				GPIOG
	#define CS_W5300_PAD_AF				PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART5_CTS_PIN				GPIO_Pin_14
	#define UART5_CTS_PORT				GPIOG
	#define UART5_CTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

	#define UART5_RTS_PIN				GPIO_Pin_15
	#define UART5_RTS_PORT				GPIOG
	#define UART5_RTS_PAD_AF			PAD_AF1 // PAD Config - LED used 2nd Function

#endif

#endif /* STM32F10X_BOARD_H_ */
