#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: function parameter
 * @str: needs to be duplicated
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t t;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (t = 0 ; str[t] ; t++)
		;
	new_node->len = t;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
