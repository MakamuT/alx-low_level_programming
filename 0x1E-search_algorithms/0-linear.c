#include "search_algos.h"
/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: pointer to the first element
 * @size: num of elements in an array
 * @value: value to be searched
 * Return: NULL or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t t;

	if (array == NULL)
		return (-1);

	for (t = 0; t < size; t++)
	{
		printf("Value checked array[%ld] = [%d]\n", t, array[t]);
		if (array[t] == value)
			return (t);
	}
	return (-1);
}
