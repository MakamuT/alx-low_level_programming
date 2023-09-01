#include<stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("argc = %d\n", argc - 1);
	return (0);
}
