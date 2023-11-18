#include "main.h"

/**
 * main - prints the minimum number of coins to make change for money
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char **argv)
{
	int change, intake;
	char *t;
	unsigned int r;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	intake = strtol(argv[1], &t, 10);
	change = 0;
	if (!*t)
	{
		while (intake > 1)
		{
			for (r = 0; r < sizeof(coins[r]); r++)
			{
				if (intake >= coins[r])
				{
					change += intake / coins[r];
					intake %= coins[r];
				}
			}
		}
		if (intake == 1)
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
