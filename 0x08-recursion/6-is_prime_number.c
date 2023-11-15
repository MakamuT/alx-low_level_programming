#include "main.h"
/**
 * prime - checks if number's a prime
 * @s: int
 * @n: int
 * Return: 1
 */

int prime(int s, int n)
{
	if (n % s == 0)
	{
		if (n == s)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, s + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number or 0
 * @n: int
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (prime(n, 2));
}
