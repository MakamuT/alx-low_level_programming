#include "function_pointers.h"
/**
 * print_name -  prints a name
 * @name: char
 * @f: voided char
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
