/*
 ******************************************************************************
 *   @file  	 StringFunctions.h
 *   @brief 	 This file contains all the function prototype.
 *   @date       Nov 27, 2021
 *   @author	 Kaan Donmez
 *   @version    1.0.0
 ******************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char *StringConcatenate(char *firstValue, char *secondValue);
uint32_t StringConvertToInteger(char *value);
float StringConvertToFloat(char *value);
char *IntegerConvertToString(int value);