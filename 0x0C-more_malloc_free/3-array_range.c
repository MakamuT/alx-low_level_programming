#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *d, i;

	if (min > max)
		return (NULL);
	d = malloc((max - min + 1) * sizeof(*d));
	if (d == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		*(d + i) = min;
	return (d);
}
