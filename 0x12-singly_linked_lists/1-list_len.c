#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: function parameter
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int index = 0;
	const list_t *recent = h;

	while (recent != NULL)
	{
		index++;
		recent = recent->next;
	}
	printf("%d\n", index);

	return (index);
}
