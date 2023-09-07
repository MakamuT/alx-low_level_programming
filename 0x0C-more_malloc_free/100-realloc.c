#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * _realloc - rellocates memory block
 * @old_size: int
 * @new_size: int
 * @ptr: input value
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int q;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (q = 0 ; q < old_size && q < new_size ; q++)
		nptr[q] = ((char *) ptr)[q];

	free(ptr);
	return (nptr);
}
