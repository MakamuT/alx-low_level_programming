#include "main.h"
/**
 *print_last_digit - print_last_digit
 *@i: function parameter
 *Return: n
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (i < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
