#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times '\' will be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}

