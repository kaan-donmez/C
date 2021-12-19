#include "ShellSort.h"

void Swap(uint32_t *first, uint32_t *second)
{
    uint32_t temp = *first;
    *first = *second;
    *second = temp;
}

uint32_t ShellSort(uint32_t arr[], uint32_t size)
{
    for (uint32_t gap = size / 2; gap > 0; gap /= 2)
    {
        for (uint32_t i = gap; i < size; i += 1)
        {
            uint32_t temp = arr[i];

            uint32_t j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
    return 0;
}

void PrintArray(uint32_t arr[], uint32_t size)
{
    uint32_t i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
