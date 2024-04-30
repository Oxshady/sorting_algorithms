#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to first ele o arr
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;

		if (min != i)
		{
			_swap(array, min, i);
			print_array(array, size);
		}
	}
}
