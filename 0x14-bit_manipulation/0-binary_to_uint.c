#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int r;

	if (b == NULL)
		return (0);
	for (r = 0; b[r] != '\0'; r++)
	{
		{
			if (b[r] != '0' && b[r] != '1')
				return (0);
		}

	result = (result << 1) + (b[r] - '0');
	}
	return (result);
}
