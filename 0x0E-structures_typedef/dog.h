#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new type dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;

#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
