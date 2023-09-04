#include "main.h"
#include<stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: input value
 *
 * Return: s
 */

char *_strdup(char *str)
{
	int r = 0, t = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[t])
	{
		t++;
	}

	s = malloc((sizeof(char) * t) + 1);
	if (s == NULL)
		return (NULL);
	while (r < t)
	{
		s[r] = str[r];
		r++;
	}
	s[r] = '\0';
	return (s);
}
