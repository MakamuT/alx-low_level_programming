#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: the first node
 * @str: const
 * Return: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;
	size_t n;

	new = malloc(sizeof(list_t));

	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	node = *head;

	if (node == NULL)
	{
		*head = new;
	}
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	return (*head);
}
