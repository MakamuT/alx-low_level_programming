#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: int
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	listint_t *recent = head;

	while (recent != NULL)
	{
		if (ind == index)
			return (0);
	}
	recent = recent->next;
	ind++;

	return (NULL);
}
