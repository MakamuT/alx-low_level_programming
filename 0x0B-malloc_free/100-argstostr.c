#include "main.h"
/**
 * *argstostr - oncatenates all the arguments
 * @ac: int
 * @av: char
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, arg2, n;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (arg2 = 0; av[arg][arg2]; arg2++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (arg2 = 0; av[arg][arg2]; arg2++)
		{
			str[n++] = av[arg][arg2];
		}
	}
	str[n++] = '\n';
	return (str);
}

