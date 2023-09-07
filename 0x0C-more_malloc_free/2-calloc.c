#include "main.h"
#include<stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @size: unsigned int
 * @nmemb: unsigned int
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int s = 0;
	int t = 0;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = nmemb * size;
	b = malloc(t);
	if (b == NULL)
		return (NULL);
	while (s < t)
	{
		b[s] = 0;
		s++;
	}
	return (b);
}
