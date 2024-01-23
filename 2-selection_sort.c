#include "sort.h"

/**
 * swap_n - swaps two elements in the array
 * @x: first element to be swapped
 * @y: second element to be swapped
 */

void swap_n(int *x, int *y)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * selection_sort  - sorts an array based on selection sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int *s;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		s = array + i;
		for (j = i + 1; j < size; j++)
			s = (array[j] < *s) ? (array + j) : s;

		if ((array + i) != s);
		{
			swap_n(array + i, s);
			print_array(array, size);
		}
	}
}
