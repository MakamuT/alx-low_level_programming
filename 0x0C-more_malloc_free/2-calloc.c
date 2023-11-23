#include "main.h"
/**
 * _calloc -  allocates memory for an array using malloc
 * @nmemb: int
 * @size: int
 * Return: 0 or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *d = NULL;
	char *str;
	unsigned int u;

	if (nmemb <= 0 || size <= 0)
		return (d);
	d = malloc(nmemb * size);
	if (d == 0)
		return (NULL);
	str = (char *)d;
	for (u = 0; u < (nmemb * size); u++)
		*(str + u) = 0;
	return (str);
}
