#include "lists.h"
/**
 * get_nodeint_at_index - eturns the nth node of a listint_t
 * @index: unsigned int
 * @head: pointer
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
		head = head->next;
	return (head);
}
