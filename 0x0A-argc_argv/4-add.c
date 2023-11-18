#include "main.h"
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argv: char
 * @argc: int
 * Return: 0
 */

int main(int argc, char **argv)
{
	int s, n, add = 0;

	(void)argv;
	if (argc > 1)
	{
		for (s = 1; s < argc; s++)
		{
			for (n = 0; argv[s][n] != '\0'; n++)
			{
				if (!isdigit(argv[s][n]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[s]);
		}
	}
	printf("%d\n", add);
	return (0);
}
