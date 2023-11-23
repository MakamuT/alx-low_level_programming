#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @n: unsigned int
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t, r;
	unsigned int len, len2;
	char *s;

	len = len2 = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	s = (char *)malloc((len + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (t = 0; s1[t] != '\0'; t++)
		s[t] = s1[t];
	for (r = 0; r < n && s2[r] != '\0'; r++)
	{
		s[t] = s2[r];
		t++;
	}
	s[t] = '\0';
	return (s);
}
