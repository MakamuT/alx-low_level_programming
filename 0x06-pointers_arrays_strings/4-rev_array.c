#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: function parameter
 * @n: function parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		i++;
		n--;
	}
}
