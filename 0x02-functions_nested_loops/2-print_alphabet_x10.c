#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char m;
	int n;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
		{
			_putchar(m);
			_putchar('\n');
		}
	}
	_putchar('\n');
}

