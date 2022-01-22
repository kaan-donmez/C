#ifndef __UART_INTERFACE__
#define __UART_INTERFACE__

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

#endif /* __UART_INTERFACE__ */
