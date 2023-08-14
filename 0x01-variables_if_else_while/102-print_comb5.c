#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int e, f;

	for (e = 0 ; e <= 98 ; e++)
	{
		for (f = e + 1 ; f <= 99 ; f++)
		{
			putchar((e / 10) + '0');
			putchar((f % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((f % 10) + '0');
			if (e == 98 && f == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
