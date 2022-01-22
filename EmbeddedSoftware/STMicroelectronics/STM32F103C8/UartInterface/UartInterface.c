#include "UartInterface.h"

/*
 * @brief This function is to send UART data.
 * @param outputData: string data to be send via UART.
 */
void SendStringDataWithUart(char *outputData)
{
	static char data[32] = " ";
	sprintf(data, "\f %d \n\r,", outputData);
	HAL_UART_Transmit(UART_HANDLE, (uint8_t *)data, strlen(data), TIMEOUT);
}

/*
 * @brief This function is to send UART data.
 * @param outputData: number data to be send via UART.
 */
void SendNumberDataWithUart(uint8_t outputData)
{
	HAL_UART_Transmit(UART_HANDLE, &outputData, 1, TIMEOUT);
}

/*
 * @brief This function is to get UART data.
 */
uint8_t GetUartData()
{
	static uint8_t inputData;
	HAL_UART_Receive(UART_HANDLE, &inputData, 1, TIMEOUT);
	return inputData;
}
