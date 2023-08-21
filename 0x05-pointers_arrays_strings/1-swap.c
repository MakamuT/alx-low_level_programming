#include "main.h"
#include<stdio.h>

/**
 * swap_int - swap the value of two ints
 * @a: int 1
 * @b: int 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
