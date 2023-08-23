#include "main.h"
/**
 * string_toupper - lowercase to uppercase
 * @a: type int
 * Return: string a
 */

char *string_toupper(char *a)
{
	int c;

	for (c = 0 ; a[c] != '\0' ; c++)
	{
		if (a[c] > 96 && a[c] < 123)
		{
			a[c] -= 32;
		}
	}
	return (a);
}
