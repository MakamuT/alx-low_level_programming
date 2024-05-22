#include "search_algos.h"
/**
 * jump_search - searches for a value using jump search algorithm
 * @value:  value to search for
 * @size: num of elements
 * @array: pointer
 * Return: NULL or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t t, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (t = jump = 0; jump < size && array[jump] < value;)
	{
		printf("value checked array[%ld] = [%d]\n", jump, array[jump]);
		t = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", t, jump);

	jump = jump < size - 1 ? jump : size;
	for (; t < jump && array[t] < value; t++)
		printf("Value checked array[%ld] = [%d]\n", t, array[t]);
	if (t < size)
		printf("Value checked array[%ld] = [%d]\n", t, array[t]);

	return (t < size && array[t] == value) ? (int)t : -1;
}
