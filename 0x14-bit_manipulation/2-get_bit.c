#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @index: function parameter
 * @n: function parameter
 * Return: -1 or index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
