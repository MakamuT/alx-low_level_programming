#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	int ind = 0;

	while (h != NULL)
	{
		ind++;
		h = h->next;
	}
	return (ind);
}
