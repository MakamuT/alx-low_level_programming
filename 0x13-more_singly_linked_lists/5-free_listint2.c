#include "lists.h"
/**
 * free_listint2 - frees a second list
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *recent, *temp;

	if (head != NULL)
	{
		recent = *head;

		while ((temp = recent) != NULL)
		{
			recent = recent->next;
			free(temp);
		}
		*head = NULL;
	}
}
