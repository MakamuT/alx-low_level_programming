#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @str: to be duplicated
 * @head: input value
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	size_t index;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (index = 0 ; str[index] ; index++)

	new->len = index;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
return (*head);
}
