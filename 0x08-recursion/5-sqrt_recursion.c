#include "main.h"
#include<stdio.h>

/**
 * funct - operation of _sqrt_recursion
 * @a: input value
 * @b: input value
 * Return: sqrt or -1
 */

int funct(int a, int b)
{
	int sqrt;

	sqrt = b * b;
	if (sqrt == a)
		return (b);
	else if (sqrt < a)
		return (funct(a, b + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - return the natural sqrt root number
 * @n: int
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	return (funct(n, 1));
}
