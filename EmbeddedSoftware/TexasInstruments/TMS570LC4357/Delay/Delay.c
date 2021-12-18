/*
 ******************************************************************************
 *   @file  	 Delay.h
 *   @brief 	 This file contains all the function.
 *   @date       Aug 26, 2021
 *   @author	 Kaan Dönmez
 *   @version    1.0.0
 ******************************************************************************
 */

#include "Delay.h"

/*
 * @brief This function provides a delay in milliseconds.
 * @param count delay time in milisecond. 
 */
void DelayMs(unsigned int count)
{
    count = count * 10000;
    register unsigned int i;
    for (i = 0; i < count; i++);
}
