#include "main.h"
#include<stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
