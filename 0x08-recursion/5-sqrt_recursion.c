#include "main.h"
/**
 * operation - returns the root of a number
 * @n: int
 * @s: iterated int
 * Return: 0
 */

int operation(int n, int s)
{
	if (s % (n / s) == 0)
	{
		if (s * (n / s) == n)
			return (s);
		else
			return (-1);
	}
	return (0 + operation(n, s + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (operation(n, 2));
}
