#include "main.h"
#include<stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: input value
 * @accept: input value
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int c, n;

	for (c = 0 ; s[c] != '\0' ; c++)
	{
		for (n = 0 ; accept[n] != '\0' ; n++)
		{
			if (s[c] == accept[n])
				return (s + c);
		}
	}
	return (NULL);
}
