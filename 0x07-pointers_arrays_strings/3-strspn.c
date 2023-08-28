#include "main.h"

/**
 * _strspn - lenght of a prefix substring
 * @s: input value
 * @accept: input value
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		c = 0;
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
			}
		}
		b = 0;
		if (c == 0)
			break;
		str++;
		a++;
	}
	return (a);
}
