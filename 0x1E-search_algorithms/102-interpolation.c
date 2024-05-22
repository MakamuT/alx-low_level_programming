#include "search_algos.h"
/**
 * interpolation_search - searches for a value using
 *                            interpolation search algorithm
 * @size: num of elements in array
 * @array: pointer
 * @value: value to be searched
 * Return: NULL or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t t, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		t = l + (((double)(r - 1) / (array[r] - array[l])) *
				(value - array[l]));
		if (t < size)
			printf("Value checked array[%ld] = [%d]\n", t, array[t]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", t);
			break;
		}
		if (array[t] == value)
			return (t);
		if (array[t] > value)
			r = t - 1;
		else
			l = t + 1;
	}
	return (-1);
}
