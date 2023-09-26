#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *recent = head;

	while (recent != NULL)
	{
		sum += recent->n;
		recent = recent->next;
	}
	return (sum);
}
