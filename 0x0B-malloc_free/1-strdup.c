#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int t, r;

	if (str == NULL)
		return (NULL);
	for (t = 0; str[t] != '\0'; t++)
		;
	s = malloc(t * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);
	for (r = 0; r < t; r++)
		s[t] = str[t];
	s[t] = '\0';
	return (s);
}
