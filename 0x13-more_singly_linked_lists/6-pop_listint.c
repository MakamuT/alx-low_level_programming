#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int node1;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);
	temp = *head;
	next = temp->next;
	node1 = temp->n;
	free(temp);
	*head = next;

	return (node1);
}
