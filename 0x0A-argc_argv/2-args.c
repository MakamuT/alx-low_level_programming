#include<stdio.h>

/**
 * main - prints all arguments
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0 ; c < argc ; c++)
	printf("%s\n", argv[c]);
		return (0);
}
