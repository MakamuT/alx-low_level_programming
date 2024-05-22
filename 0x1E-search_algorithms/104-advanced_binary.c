#include "search_algos.h"
/**
 * recursive_binary - searches recursively for a value
 * @left: start index
 * @value: value to search for
 * @right: ending index
 * @array: pointer
 * Return: -1
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t t;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (t = left; t < right; t++)
		printf("%d, ", array[t]);
	printf("%d\n", array[t]);

	t = left + (right - left) / 2;
	if (array[t] == value && (t == left || array[t - 1] != value))
		return (-1);
	if (array[t] >= value)
		return (advanced_binary_recursive(array, left, t, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @value: value to search for
 * @size: number of elements
 * @array: pointer
 * Return: -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
