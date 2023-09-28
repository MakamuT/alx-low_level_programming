#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0
 */

int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *) &s;

	return (*c);
}
