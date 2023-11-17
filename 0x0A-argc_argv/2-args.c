#include "main.h"
/**
 * main -  prints all arguments it receives
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
