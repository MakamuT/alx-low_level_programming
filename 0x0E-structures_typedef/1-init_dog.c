#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: dog struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
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
