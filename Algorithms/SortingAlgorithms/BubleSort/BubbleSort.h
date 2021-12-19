#ifndef __BUBBLE_SORT_H__
#define __BUBBLE_SORT_H__

#include <stdio.h>
#include "stdint.h"

void Swap(uint32_t *first, uint32_t *second);
void BubbleSort(uint32_t arr[], uint32_t size);
void PrintArray(uint32_t arr[], uint32_t size);

#endif /* __BUBBLE_SORT_H__ */