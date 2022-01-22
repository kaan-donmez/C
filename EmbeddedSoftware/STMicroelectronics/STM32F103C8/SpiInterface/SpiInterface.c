#include "SpiInterface.h"

/*
 * @brief This function is a interface for SPI.
 * @param spi_data data to be send via SPI.
 */
void SpiInterface(uint16_t spi_data)
{

	uint8_t tx_buf[2];

	tx_buf[0] = spi_data >> 8;
	tx_buf[1] = spi_data & 0xFF;

	ChipSelectDisable();
	while (!(__HAL_SPI_GET_FLAG(SPI_Handle_Type, SPI_FLAG_TXE)))
		;
	HAL_SPI_Transmit(SPI_Handle_Type, tx_buf, 2, 10);
	while (__HAL_SPI_GET_FLAG(SPI_Handle_Type, SPI_FLAG_BSY))
		;
	ChipSelectEnable();
}

/*
 * @brief This function is a enable pin for SPI.
 */
static void ChipSelectEnable()
{
	HAL_GPIO_WritePin(GPIO_Port, GPIO_Pin, 1);
}

/*
 * @brief This function is a disable pin for SPI.
 */
static void ChipSelectDisable()
{
	HAL_GPIO_WritePin(GPIO_Port, GPIO_Pin, 0);
}
