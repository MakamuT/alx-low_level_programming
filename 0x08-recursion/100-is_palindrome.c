#include "main.h"
#include<stdio.h>

/**
 *  _strlen_recursion - prints the length of a string
 *  @s: input value
 *  Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * _check_pal - check if string is a palindrome
 * @s: input value
 * @i: int
 * Return: 1 or 0
 */

int _check_pal(char *s, int i)
{
	if (i <= 1)
		return (1);
	else if (*s == *(s + i - 1))
		return (_check_pal(s + 1, i - 2));
	else
		return (0);
}

/**
 * is_palindrome - function checks for palindrome
 * @s: char
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i <= 1)
		return (1);
	return (_check_pal(s, i));
}
