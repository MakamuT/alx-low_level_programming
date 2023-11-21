#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int n = 0, i = 0, len = 0, len2 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len2])
		len2++;

	str = malloc(sizeof(char) * (len + len2));
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		while (n < (len + len2))
		{
			str[n] = s2[i];
			n++;
			i++;
		}
	}
	str[n] = '\0';
	return (str);
}
