#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: function parameter
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *recent;

	while ((recent = head) != NULL)
	{
		head = head->next;
		free(recent->str);
		free(recent);
	}
}
