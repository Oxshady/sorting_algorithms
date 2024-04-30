#include "sort.h"
/**
 * _swap - swap between to elements of array
 * @arr: address of first element of the array
 * @ind_one: index 1
 * @ind_two: index2
 */
void _swap(int *arr, int ind_one, int ind_two)
{
	int aux = arr[ind_one];

	arr[ind_one] = arr[ind_two];
	arr[ind_two] = aux;
}

/**
 *  bubble_sort - sorts an array of integers in ascending order
 *  using the Bubble sort algorithm
 *	print the array after each time you swap two elements
 * @array: array to sort
 * @size: lenght of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, ii = 0, flag = 0;

	if (size < 2)
		return;
	for (; i < size - 1; i++)
	{
		for (ii = 0; ii < size - i - 1; ii++)
		{
			if (array[ii] > array[ii + 1])
			{
				_swap(array, ii, ii + 1);
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}
