#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: is the first integer to swap.
 * @b: is the second integer to swap.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: is an array of integers.
 * @size: is the size of the array.
 * Description: Prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	int *m;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		m = array + i;
		for (j = i + 1; j < size; j++)
			m = (array[j] < *m) ? (array + j) : m;

		if ((array + i) != m)
		{
			swap_ints(array + i, m);
			print_array(array, size);
		}
	}
}
