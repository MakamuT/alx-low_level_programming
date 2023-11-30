#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @n: unsigned int
 * @separator: string to be printed between numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int in;

	va_start(arg, n);

	for (in = 0; in < n; in++)
	{
		printf("%d\n", va_arg(arg, int));

		if (separator && in != n - 1)
			printf("%s\n", separator);
	}
	va_end(arg);
}
