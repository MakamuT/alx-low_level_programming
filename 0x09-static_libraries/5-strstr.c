#include "main.h"
#include<stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input value
 * @needle: input value
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *one = haystack;
		char *two = needle;

	while (*one == *two && *two != '\0')
	{
		one++;
		two++;
	}

	if (*two == '\0')
		return (haystack);
	}
	return (NULL);
}
