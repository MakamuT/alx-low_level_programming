#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t
 * @head: pointer
 * @n: int
 * Return: NULL or 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
			temp->next = new;
		}
	}
	else
		*head = new;
	return (*head);
}
