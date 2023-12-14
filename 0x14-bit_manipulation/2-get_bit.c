#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: function parameter
 * @index: function parameter
 * Return: 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	return ((n & (1 << index)) ? 1 : 0);
}
