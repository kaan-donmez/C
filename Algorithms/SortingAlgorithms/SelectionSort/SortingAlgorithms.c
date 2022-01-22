#include "SortingAlgorithms.h"

void Swap(uint32_t *first, uint32_t *second)
{
	uint32_t temp = *first;
	*first = *second;
	*second = temp;
}

void SelectionSort(uint32_t arr[], uint32_t size)
{
	uint32_t i, j, min;
	for (i = 0; i < size - 1; i++)
	{

		min = i;
		for (j = i + 1; j < size; j++)
			if (arr[j] < arr[min])
				min = j;

		Swap(&arr[min], &arr[i]);
	}
}

void PrintArray(uint32_t arr[], uint32_t size)
{
	uint32_t i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
