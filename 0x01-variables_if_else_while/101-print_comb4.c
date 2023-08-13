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
	int d, e, f;

	for (d = '0' ; d <= '9' ; d++)
	{
		for (e = d + 1 ; e <= '9' ; e++)
		{
			for (f = e + 1 ; f <= '9' ; f++)
			{
				if ((e != d) != f)
				{
					putchar(d);
					putchar(e);
					putchar(f);
					if (d == '7' && e == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
