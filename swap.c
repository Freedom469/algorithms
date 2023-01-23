#include "sort.h"

/*
*swap - swaps position of two given integers
*
*@a: first value to be swapped
*
*@b: second value to be swaapped
*
*/


void swap(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;

}
