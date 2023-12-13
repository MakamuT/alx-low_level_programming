#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @n: int
 * @head: the first node
 * Return: NULL or 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
