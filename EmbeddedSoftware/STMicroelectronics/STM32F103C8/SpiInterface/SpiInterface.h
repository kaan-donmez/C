#ifndef __SPI_INTERFACE__
#define __SPI_INTERFACE__

#include "spi.h"
#include "stdint.h";

#define SPI_Handle_Type &hspi1
#define GPIO_Port GPIOB
#define GPIO_Pin GPIO_PIN_15

void SpiInterface(uint16_t data);
static void ChipSelectEnable();
static void ChipSelectDisable();

#endif /* __SPI_INTERFACE__ */
