#include "MergeSort.h"

void Swap(uint32_t *first, uint32_t *second)
{
    uint32_t temp = *first;
    *first = *second;
    *second = temp;
}

uint32_t MergeSort(uint32_t arr[], uint32_t l, uint32_t r)
{
    if (l < r)
    {
        uint32_t m = l + (r - l) / 2;

        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);

        MergeArray(arr, l, m, r);
    }
}

void MergeArray(uint32_t arr[], uint32_t l, uint32_t m, uint32_t r)
{
    uint32_t i, j, k;
    uint32_t n1 = m - l + 1;
    uint32_t n2 = r - m;

    uint32_t L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void PrintArray(uint32_t arr[], uint32_t size)
{
    uint32_t i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
