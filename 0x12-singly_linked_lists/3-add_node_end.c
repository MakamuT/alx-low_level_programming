#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @str: to be duplicated
 * @head: input value
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp;
	size_t index;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	for (index = 0 ; str[index] ; index++)

	node->len = index;
	node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
return (*head);
}
