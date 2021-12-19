#include "BubbleSort.h"

void Swap(uint32_t *first, uint32_t *second)
{
    uint32_t temp = *first;
    *first = *second;
    *second = temp;
}

void BubbleSort(uint32_t arr[], uint32_t size)
{
    uint32_t i, j;
    for (i = 0; i < size - 1; i++)

        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                Swap(&arr[j], &arr[j + 1]);
}

void PrintArray(uint32_t arr[], uint32_t size)
{
    uint32_t i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
