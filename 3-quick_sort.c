#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps two integers
 * @p1: Pointer to the first integer
 * @p2: Pointer to the second integer
 */
void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/**
 * part - Partitions the array based on the pivot
 * @arr: Array to be sorted
 * @low: Starting index of the array
 * @high: Ending index of the array
 * @size: Size of the array
 * Return: Index of the pivot element
 */
int part(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	print_array(arr, size);
	return (i + 1);
}

/**
 * rec - Recursive function for quick sort
 * @arr: Array to be sorted
 * @low: Starting index of the array
 * @high: Ending index of the array
 * @size: Size of the array
 */
void rec(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = part(arr, low, high, size);

		rec(arr, low, pi - 1, size);
		rec(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	rec(array, 0, size - 1, size);
}
