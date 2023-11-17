#include "main.h"
#include <ctype.h>

/**
 * main -  adds positive numbers
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char **argv)
{
	int s, n;
	int ind = 0;

	for (s = 1; s < argc; s++)
	{
		for (n = 0; argv[s][n] != '\0'; n++)
		{
			if (!isdigit(argv[s][n]))
				printf("Error\n");
			return (1);
		}
		ind += atoi(argv[s]);
	}
	printf("%d\n", ind);
	return (0);
}
