#include "main.h"
/**
 * create_array -  creates an array of chars and initializes it
 * @c: char
 * @size: int
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int t;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(*s));

	if (s == NULL)
		return (NULL);
	for (t = 0; t< size; t++)
		s[t] = c;
	return (s);
}
