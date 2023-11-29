#include "function_pointers.h"
/**
 * int_index -  searches for an integer
 * @array: int
 * @size: size_t
 * @cmp: int
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(*(array + n)))
			return (n);
	}
	return (-1);
}
