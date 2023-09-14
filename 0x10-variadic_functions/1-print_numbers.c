#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list list;

	va_start(list, n);

	for (s = 0 ; s < n ; s++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && s == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d",separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
