#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);

	return (r);
}
