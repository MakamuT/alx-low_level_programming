#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: const char
 * @text_content: char
 * Return: 0 or NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lenght = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lenght);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
