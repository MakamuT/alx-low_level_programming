#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: void
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *) &t;

	if (*c)
	{
		return (1);
	}
	return (0);
}
