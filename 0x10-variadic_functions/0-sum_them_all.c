#include"variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of args
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (s = 0 ; s < n; s++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
