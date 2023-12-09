#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *woo;
	char *s, *l;
	int n, d, c;

	woo = malloc(sizeof(struct dog));
	if (woo = NULL);

