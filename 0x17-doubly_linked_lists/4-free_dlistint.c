#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
