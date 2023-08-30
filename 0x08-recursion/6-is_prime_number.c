#include "main.h"
#include<stdio.h>

/**
 * check_prime - check if a number's a prime
 * @n: input value
 * @i: input value
 * Return: 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns if number's a prime
 * @n: input value
 * Return: int
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
