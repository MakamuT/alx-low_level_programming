#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
