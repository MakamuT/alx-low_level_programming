#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int s = 0;
	char *str;
	char *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[s])
			switch (format[s])
			{
				case 'c':
					printf("%c", va_arg(list,int));
					s = 0;
					break;
				case 'i':
					printf("%i", va_arg(list, int));
					s = 0;
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					s = 0;
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					s = 0;
					break;
				default:
					s = 1;
					break;
			}
		if (s == 0 && format[s + 1] != '\0')
			printf(", ");
		s++;
	}
	printf("\n");
	va_end(list);
}
