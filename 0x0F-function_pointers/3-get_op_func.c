#include "3-calc.h"
/**
 * get_op_func -  selects the correct function to perform the operation
 * @s: char
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int n = 0;

	while (ops[n].op != NULL && *(ops[n].op) != *s)
			n++;
	return (ops[n].f);
}
