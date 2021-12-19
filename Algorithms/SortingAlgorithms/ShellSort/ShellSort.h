#ifndef __SHELL_SORT_H__
#define __SHELL_SORT_H__

#include "stdio.h"
#include "stdint.h"

void Swap(uint32_t *first, uint32_t *second);
uint32_t ShellSort(uint32_t arr[], uint32_t size);
void PrintArray(uint32_t arr[], uint32_t size);

#endif /* __SHELL_SORT_H__ */