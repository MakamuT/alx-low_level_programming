#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: function parameter
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
	}
	free(d);
}
