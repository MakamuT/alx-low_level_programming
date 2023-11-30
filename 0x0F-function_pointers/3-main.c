#include "3-calc.h"
/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == 47 || *op == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num, num2));
	return (0);
}
