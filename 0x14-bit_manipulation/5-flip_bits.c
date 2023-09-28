#include "main.h"
/**
 * flip_bits - returns the number of bits you would needlip
 * @n: function parameter
 * @m: function parameter
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, ind = 0;
	unsigned long int recent, exclusive = n ^ m;

	for (s = 63 ; s >= 0 ; s--)
	{
		recent = exclusive >> s;
		if (recent & 1)
			ind++;
	}
	return (ind);
}
