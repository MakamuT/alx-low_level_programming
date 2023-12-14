#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: function parameter
 * @n: function parameter
 * Result: 0 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
