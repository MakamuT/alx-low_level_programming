#include "search_algos.h"
/**
 * binary_search - searches for a value using Binary search algorithm
 * @array: pointer to the first element
 * @value: value to search
 * @size: num of elements in an array
 * Return: -1 or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t t, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (t = l; t < right; t++)
			printf("%d, ", array[t]);
		printf("%d\n", array[t]);

		t = l + (r - l) / 2;
		if (array[t] == value)
			return (t);
		if (array[t] > value)
			r = t - 1;
		else
			l = t + 1;
	}
	return (-1);
}
