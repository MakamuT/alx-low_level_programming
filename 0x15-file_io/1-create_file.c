#include "main.h"
/**
 * create_file - creates a file
 * @filename: const char
 * @text_content: char
 * Return: 0 or NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wres;

	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, permissions);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wres = write(fd, text_content, _strlen(text_content));
		if (wres == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
/**
 * _strlen -  counts the lenght of astring
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
