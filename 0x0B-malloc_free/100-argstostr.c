#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argc
 * @av: argv
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, p = 0, t = 0, w = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (p < ac)
	{
		while (av[p][t])
		{
			ch++;
			t++;
		}
		t = 0;
		p++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	p = 0;
	while (av[p])
	{
		while (av[p][t])
		{
			s[w] = av[p][t];
			w++;
			t++;
		}
		s[w] = '\n';
		t = 0;
		w++;
		p++;
	}
	w++;
	s[w] = '\0';
	return (s);
}
