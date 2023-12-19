#include "main.h"
/**
 * _strlen: counts the lenght of astring
 * @s: pointer
 * Return: 0
 */
int _strlen(const char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
