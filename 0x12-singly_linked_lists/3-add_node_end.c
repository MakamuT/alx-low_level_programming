#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @str: to be duplicated
 * @head: input value
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	size_t t;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	for (t = 0 ; str[t] ; t++)

	new_node->len = t;
	new_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
return (*head);
}
