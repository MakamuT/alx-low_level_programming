#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *recent = *head;
	listint_t *next;

	while (recent != NULL)
	{
		next = recent->next;
		free(recent);
		recent = next;
	}
	*head = NULL;
}

