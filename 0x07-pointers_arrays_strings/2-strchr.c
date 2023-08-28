#include "main.h"
#include<stdio.h>

/**
 * _strchr - locates a character string
 * @s: input value
 * @c: input value
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0 ; s[b] >= '\0' ; b++)
	{
		if (s[b] == c)
			return (s + b);
	}
	return (NULL);
}
