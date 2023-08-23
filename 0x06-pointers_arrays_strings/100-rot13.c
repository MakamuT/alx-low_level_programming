#include "main.h"
/**
 * rot13 - encodes a string
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int w, x;

	char sera[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWYZ"};
	char serb[] = {"nopqrstuwxyzabcdefghijklmNOPQRSTUVWYZABCDEFGHIJKLM"};

	for (w = 0 ; s[w] != '\0' ; w++)
	{
		for (x = 0 ; sera[x] != '\0' ; x++)
		{
			if (s[w] == sera[x])
			{
				s[w] = serb[x];
				break;
			}
		}
	}
	return (s);
}
