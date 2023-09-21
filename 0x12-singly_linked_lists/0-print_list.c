#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: function parameter
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t index = 0;
	const list_t *recent = h;

	while (recent != NULL)
	{
		if (recent->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u} %s\n", recent->len, recent->str);
		index++;
		recent = recent->next;
	}
	return (index);
}
