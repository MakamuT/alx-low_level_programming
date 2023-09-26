#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @n: const int
 * @headet number
 * @head: pointer
 * Return: address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		listint_t *recent = *head;

		while (recent->next != NULL)
			recent = recent->next;
		recent->next = new_node;
	}
	return (new_node);
}
