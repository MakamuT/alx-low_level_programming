#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - adds all positive numbers
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (a = 1 ; argc[a][b] != '\0' ; b++)
		{
			if (!isdigit(argc[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argc[a]);
	}
	printf("%d\n", add);
	return (0);
}
