#include "main.h"
#include<stdlib.h>

/**
 * create_array -  creates an array of chars
 * @size: array size
 * @c: char
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int v;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (v = 0 ; v < size ; v++)
	{
		s[v] =  c;
	}
	return (s);
}
