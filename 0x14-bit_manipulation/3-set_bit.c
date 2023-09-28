#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @index: function parameter
 * @n: function parameter
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1ul << index) | *n);
	return (1);
}
