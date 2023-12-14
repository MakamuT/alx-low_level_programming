#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @m: int
 * @n: int
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ind = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		ind += xor & 1;
		xor >>= 1;
	}
	return (ind);
}
