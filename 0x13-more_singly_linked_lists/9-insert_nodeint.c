#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer
 * @n: int
 * @idx: int
 * Return: NULL or the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *recent = *head;
	(void)idx;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (recent->next != NULL)
		{
			recent = recent->next;
		}
		recent->next = new_node;
	}
	return (new_node);
}
