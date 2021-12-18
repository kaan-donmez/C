/*
 ******************************************************************************
 *   @file        SPI_Interface.h
 *   @brief       This file contains all the function prototypes for
 *                SPI_Interface.h file
 *   @date        Sep 6, 2021
 *   @author      Kaan Dönmez
 *   @version     1.0.0
 ******************************************************************************
 */

#ifndef APPLICATION_SPI_INTERFACE_SPI_INTERFACE_H_
#define APPLICATION_SPI_INTERFACE_SPI_INTERFACE_H_

#include "spi.h"
#include "stdint.h";

#define SPI_Handle_Type &hspi1
#define GPIO_Port GPIOB
#define GPIO_Pin GPIO_PIN_15

void SpiInterface(uint16_t data);
static void ChipSelectEnable();
static void ChipSelectDisable();

#endif /* APPLICATION_SPI_INTERFACE_SPI_INTERFACE_H_ */
