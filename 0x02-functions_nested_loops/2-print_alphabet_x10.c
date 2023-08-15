#include "main.h"
/**
 * main - print_x10 
 *
 * Return: always 0
 */

int main(void)
{
	char m;
	int n;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
	return (0);
}

