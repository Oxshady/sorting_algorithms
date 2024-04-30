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
