#ifndef __MERGE_SORT_H__
#define __MERGE_SORT_H__

#include "stdio.h"
#include "stdint.h"

void Swap(uint32_t *first, uint32_t *second);
uint32_t MergeSort(uint32_t arr[], uint32_t l, uint32_t r);
void MergeArray(uint32_t arr[], uint32_t l, uint32_t m, uint32_t r);
void PrintArray(uint32_t arr[], uint32_t size);

#endif /* __MERGE_SORT_H__ */