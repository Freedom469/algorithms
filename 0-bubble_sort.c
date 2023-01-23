#include "sort.h"

/**
*bubble_sort - sorts an int array  using the bubble sort algorithm
*
*@array: the array to be sorted
*
*@size: the length of the array
*/

void bubble_sort(int *array, size_t size)
{

	size_t i, j;
	int temp;

	for  (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] >  array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
