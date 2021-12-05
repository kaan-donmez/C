/*
 ******************************************************************************
 *   @file  	 SortingAlgorithms.c
 *   @brief 	 This file contains all the function.
 *   @date       Sep 21, 2021
 *   @author	 Kaan D�nmez
 *   @version    1.0.0
 ******************************************************************************
 */

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

void BubbleSort(uint32_t arr[], uint32_t size)
{
	uint32_t i, j;
	for (i = 0; i < size - 1; i++)

		for (j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
				Swap(&arr[j], &arr[j + 1]);
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

void MergeSort(uint32_t arr[], uint32_t l, uint32_t r)
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

void ShowArray(uint32_t arr[], uint32_t size)
{
	uint32_t i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
