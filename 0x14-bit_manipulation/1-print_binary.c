#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: function parameter
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int s, ind = 0;
	unsigned long int recent;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (s = 63 ; s >= 0 ; s--)
	{
		recent = n >> s;

		if (recent & 1)
		{
			_putchar('1');
			ind++;
		}
		else if (ind)
			_putchar('0');
	}
}
