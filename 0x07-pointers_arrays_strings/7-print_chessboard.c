#include "main.h"
#include<stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	i = 0;
	while (i < 8)
	{
		n = 0;
		while (n < 8)
		{
			putchar(a[i][n]);
			n++;
		}
		putchar('\n');
		i++;
	}
}
