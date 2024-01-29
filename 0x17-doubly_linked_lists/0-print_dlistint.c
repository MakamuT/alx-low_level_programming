#include "lists.h"
/**
 * print_dlistint - print elements
 * @h: pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
