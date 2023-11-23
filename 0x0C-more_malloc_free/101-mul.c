#include "main.h"
/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n1, n2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
