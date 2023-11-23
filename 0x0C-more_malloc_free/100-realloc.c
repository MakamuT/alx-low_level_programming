#include "main.h"
/**
 * _realloc -  reallocates a memory block
 * @old_size: int
 * @ptr: pointer
 * @new_size: int
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *d, *n;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		d = malloc(new_size);
		if (d == NULL)
			return (NULL);
		return (d);
	}
	d = malloc(new_size);
	if (d == NULL)
		return (NULL);
	n = ptr;
	for (i = 0; i < old_size; i++)
		*(d + i) = *(n + i);
	free(ptr);
	return (d);
}
