#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: function parameter
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int s;

	if (!b)
		return (0);

	for (s = 0 ; b[s] ; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		total = 2 * total + (b[s] - '0');
	}
	return (total);
}
