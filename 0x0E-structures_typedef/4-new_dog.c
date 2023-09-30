#include<stdio.h>
#include "dog.h"
#include<stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog  *tiger;
	int m, n, o;
	char *l, *w;

	tiger = malloc(sizeof(struct dog));
	if (tiger == NULL)
		return (NULL);
	for (m = 0 ; *(name + m) != '\0' ; m++)
		;
	for (n = 0 ; *(owner + n) != '\0' ; n++)
		;
	l = malloc(sizeof(char) * m + 1);
	if (l == NULL)
	{
		free(tiger);
		return (NULL);
	}
	w = malloc(sizeof(char) * n + 1);
	if (w == NULL)
	{
		free(l);
		free(tiger);
		return (NULL);
	}

	for (o = 0 ; o <= m ; o++)
		*(l + o) = *(name + o);
	for (o = 0 ; o <= n; o++)
		*(w + o) = *(owner + o);

	tiger->name = l;
	tiger->age = age;
	tiger->owner = w;
	return (tiger);
}
