/*
 ******************************************************************************
 *   @file  	 SortingAlgorithms.h
 *   @brief 	 This file contains all the function.
 *   @date       Sep 21, 2021
 *   @author	 Kaan D�nmez
 *   @version    1.0.0
 ******************************************************************************
 */

#include <stdio.h>
#include "inttypes.h"
#include "stdint.h"

#ifndef APPLICATION_SORTING_ALGORITHMS_SORTING_ALGORITHMS_H_
#define APPLICATION_SORTING_ALGORITHMS_SORTING_ALGORITHMS_H_

void Swap(uint32_t *first, uint32_t *second);
void SelectionSort(uint32_t arr[], uint32_t size);
void BubbleSort(uint32_t arr[], uint32_t size);
uint32_t ShellSort(uint32_t arr[], uint32_t size);
void MergeSort(uint32_t arr[], uint32_t l, uint32_t r);
void MergeArray(uint32_t arr[], uint32_t l, uint32_t m, uint32_t r);
void ShowArray(uint32_t arr[], uint32_t size);

#endif /* APPLICATION_SORTING_ALGORITHMS_SORTING_ALGORITHMS_H_ */
