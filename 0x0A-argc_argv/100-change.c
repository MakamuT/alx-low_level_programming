#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints min change
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int change, input;
	unsigned int g;
	char *h;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = strtol(argv[1], &h, 10);
	change = 0;

	if (!*h)
	{
		while (input > 1)
		{
			for (g = 0 ; g < sizeof(coins[g]) ; g++)
			{
				if (input >= coins[g])
				{
					change += input / coins[g];
					input %= coins[g];
				}
			}
		}
		if (input == 1)
			change++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", change);
	return (0);
}
