#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main - main function
 * @argv: string
 * @argc: int
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}