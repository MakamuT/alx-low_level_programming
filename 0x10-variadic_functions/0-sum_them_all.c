#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int s, ind = 0;

	va_start(arg, n);

	for (s = 0; s < n; s++)
		ind += va_arg(arg, int);
	va_end(arg);

	return (ind);
}
