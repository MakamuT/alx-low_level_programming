#include<stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer
 * @name: value to initialize
 * @age: value to initialize
 * @owner: value to be initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
