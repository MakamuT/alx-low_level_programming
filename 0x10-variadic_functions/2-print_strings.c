#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	char *l;

	va_list list;

	va_start(list, n);
	for (s = 0 ; s < n ; s++)
	{
		l = va_arg(list, char *);
		if (!l)
			l = "nil";
		if (!separator)
			printf("%s", l);
		else if (separator && s == 0)
			printf("%s", l);
		else
			printf("%s%s", separator, l);
	}
	printf("\n");
	va_end(list);
}
