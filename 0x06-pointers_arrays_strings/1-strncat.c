#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: number of elements to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
	}
	for (d = 0 ; src[d] != '\0' && n > 0 ; d++, n--, c++)
	{
		dest[c] = src[d];
	}
	return (dest);
}
