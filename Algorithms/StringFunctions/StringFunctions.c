/*
 ******************************************************************************
 *   @file  	   StringFunctions.c
 *   @brief 	   This file contains all the function.
 *   @date       Nov 27, 2021
 *   @author	   Kaan Donmez
 *   @version    1.0.1
 ******************************************************************************
 */

#include "StringFunctions.h"

/*
 * @brief This function is to concatenate string.
 * @param firstValue : first string.
 *        secondValue : second string.
   TODO : Add error sitiations and functions.
 */
char *StringConcatenate(char *firstValue, char *secondValue)
{
  char str[100] = "";
  strcat(str, firstValue);
  strcat(str, " ");
  return strcat(str, secondValue);
}

/*
 * @brief This function is to convert string to integer.
 * @param value : String data.
 */
uint32_t StringConvertToInteger(char *value)
{
  uint32_t integerValue = atoi(value);
  return integerValue;
}

/*
 * @brief This function is to convert string to float.
 * @param value : String data.
 */
float StringConvertToFloat(char *value)
{
  float floatValue = atof(value);
  return floatValue;
}

/*
 * @brief This function is to convert integer to string.
 * @param value : Integer data.
 */
char *IntegerConvertToString(int value)
{
  static char text[100];
  sprintf(text, "%d", value);
  return text;
}