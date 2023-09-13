#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: the number of elements
 * @cmp: a pointer to the function
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (s = 0 ; s < size ; s++)
		if (cmp(array[s]))
			return (s);
	return (-1);
}
