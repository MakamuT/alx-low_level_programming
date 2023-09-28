#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @index: function parameter
 * @n: function parameter
 * Return: -1 or 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1ul << index) & *n);
	return (1);
}
