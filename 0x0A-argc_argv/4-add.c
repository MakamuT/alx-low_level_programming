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
	int a;
	int b;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (a = 1 ; a < argc ; a++)
		{
			for (a = 1 ; argv[a][b] != '\0' ; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[a]);
		}
	}
	printf("%d\n", add);
	return (0);
}
