/*
 ******************************************************************************
 *   @file  	 Led_Blink.c
 *   @brief 	 This file contains all the function.
 *   @date       Aug 26, 2021
 *   @author	 Kaan Dönmez
 *   @version    1.0.0
 ******************************************************************************
 */

#include "LedBlink.h"

/*
 * @brief This function is a led blink application.
 */
void LedBlink()
{
    gioInit();
    while (1)
    {
        gioToggleBit(gioPORTB, 6);
        DelayMs(1000);
        gioToggleBit(gioPORTB, 7);
        DelayMs(1000);
    }
}
