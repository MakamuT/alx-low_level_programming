#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *recent;

	while ((recent = head) != NULL)
	{
		head = head->next;
		free(recent);
	}
}
