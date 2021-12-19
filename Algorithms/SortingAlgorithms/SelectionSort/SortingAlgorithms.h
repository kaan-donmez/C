/*
 ******************************************************************************
 *   @file  	 SelectionSort.h
 *   @brief 	 This file contains all the function.
 *   @date       Sep 21, 2021
 *   @author	 Kaan Dönmez
 *   @version    1.0.0
 ******************************************************************************
 */

#include <stdio.h>
#include "stdint.h"

#ifndef __SELECTION_SORT_H__
#define __SELECTION_SORT_H__

void Swap(uint32_t *first, uint32_t *second);
void SelectionSort(uint32_t arr[], uint32_t size);
void PrintArray(uint32_t arr[], uint32_t size);

#endif /* __SELECTION_SORT_H__ */
