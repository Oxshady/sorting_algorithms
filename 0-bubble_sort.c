#include "sort.h"
/**
 *  bubble_sort - sorts an array of integers in ascending order
 *  using the Bubble sort algorithm
 *	print the array after each time you swap two elements
 * @array: array to sort
 * @size: lenght of array
 */
void bubble_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	size_t i = 0, ii = 0, flag = 0, aux = 0;

	for (; i < size - 1; i++)
	{
		for (ii = 0; ii < size - i - 1; ii++)
		{
			if (array[ii] > array[ii + 1])
			{
				aux = array[ii];
				array[ii] = array[ii + 1];
				array[ii + 1] = aux;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}
