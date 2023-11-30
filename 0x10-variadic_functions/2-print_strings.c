#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: constant char
 * @n: unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int in;
	char *s;

	va_start(arg, n);
	for (in = 0; in < n; in++)
	{
		s = va_arg(arg, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && in != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}

