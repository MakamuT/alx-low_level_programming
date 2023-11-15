#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * _cmp - compares chars of a string
 * @s: string
 * @n1: int 1
 * @n2: int 2
 * Return: 0
 */
int _cmp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _cmp(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (_cmp(s, 0, _strlen_recursion(s) - 1));
}

