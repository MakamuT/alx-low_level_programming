#include "main.h"
#include<stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - locates the index
 * @str: input value
 * Return: index
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - counts the number words
 * @str: input value
 * Return: int
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - splits string to words
 * @str: input value
 * Return: NULL or ""
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, a, letters, n;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (a = 0 ; a < words ; a++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[a] = malloc(sizeof(char) * (letters + n));
		if (strings[a] == NULL)
		{
			for (; a >= 0 ; a--)
				free(strings[a]);
			free(strings);
			return (NULL);
		}
		for (n = 0 ; n < letters ; n++)
			strings[a][n] = str[index++];
		strings[a][n] = '\0';
	}
	strings[a] = NULL;
	return (strings);
}
