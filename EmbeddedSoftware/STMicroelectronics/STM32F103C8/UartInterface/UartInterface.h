/*
 ******************************************************************************
 *   @file  	 uart.h
 *   @brief 	 This file contains all the functions prototypes
 *   @date       Nov 15, 2021
 *   @author	 Kaan Dönmez
 *   @version    1.0.0
 ******************************************************************************
 */

#ifndef APPLICATION_UARTINTERFACE_UARTINTERFACE_H_
#define APPLICATION_UARTINTERFACE_UARTINTERFACE_H_

/* Includes */
#include "stm32f1xx_hal.h"
#include "string.h"
#include "stdio.h"
#include "stdint.h"

/* Parameters */
extern UART_HandleTypeDef huart1;

/* Constant */
#define UART_HANDLE &huart1
#define TIMEOUT 100

/* Functions */
void SendStringDataWithUart(char *outputData);
void SendNumberDataWithUart(uint8_t outputData);
uint8_t GetUartData();

#endif /* APPLICATION_UARTINTERFACE_UARTINTERFACE_H_ */
