#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int d, e;

	for (d = '0' ; d <= '9' ; d++)
	{
		for (e = d + 1 ; e <= '9' ; e++)
		{
			if (e != d)
			{
				putchar(d);
				putchar(e);
				if (d == '8' && e == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
