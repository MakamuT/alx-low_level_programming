#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format:  a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int s = 0, r, w = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_list list;

	va_start(list, format);
	while (format && format[s])
	{
		r = 0;
		while (t_arg[r])
		{
			if (format[s] == t_arg[r] && w)
			{
				printf(", ");
				break;
			} r++;
		}
		switch (format[s])
		{
			case 'c':
				printf("%c", va_arg(list, int)), w = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), w = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), w = 1;
				break;
			case 's':
				str = va_arg(list, char *), w = 1;
				if (!str)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
		} s++;
	}
	printf("\n"), va_end(list);
}
