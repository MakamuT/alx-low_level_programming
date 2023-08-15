#include "main.h"
/**
 *jack_bauer - print every minute of the day
 *
 *Return: void
 */

void jack_bauer(void)
{
	int i, p;

	for (i = 0 ; i <= 24 ; i++)
	{
		for (p = 0 ; p <= 60 ; p++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(p / 10 + '0');
		_putchar(p % 10 + '0');
		_putchar('\n');
	}
	}
}
