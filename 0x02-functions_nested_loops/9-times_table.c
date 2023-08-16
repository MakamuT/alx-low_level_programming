#include "main.h"
#include<stdio.h>
/**
 *times_table - print times table
 *
 *Return: void
 */

void times_table(void)
{
	int d, e;

	for (d = 0 ; d <= 10 ; d++)
	{
		for (e = 0 ; e <= 10 ; e++)
		{
			result = d * e;
			if (e == 0)
				printf("%d, ", result)
			else
			{
				printf("%2d", result)
					if (e != 9)
						printf(", ");
			}
		}
	}
	printf('\n');
}
