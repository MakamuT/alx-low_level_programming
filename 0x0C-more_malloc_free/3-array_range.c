#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * array_range - creates an array of integers
 * @min: input value
 * @max: input value
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *d, c = 0;

	if (min > max)
		return (NULL);
	d = malloc((sizeof(int) * (max - min) + sizeof(int)));
	if (d == NULL)
		return (NULL);
	while (min <= max)
	{
		d[c] = min;
		c++;
		min++;
	}
	return (d);
}
