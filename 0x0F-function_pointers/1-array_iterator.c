#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: int
 * @size: size_t
 * @action: voided int
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
