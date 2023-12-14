#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @index: function parameter
 * @n: function parameter
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
