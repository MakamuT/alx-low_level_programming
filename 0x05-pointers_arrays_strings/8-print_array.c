#include "main.h"
#include<stdio.h>
/**
 * print_array - print n elements of an array
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int o;

	for (o = 0 ; o < n ; o++)
	{
		printf("%d", a[o]);
		if (o != (n - 1))
		{
			printf(", ");
		}
	}
		printf("\n");
}
