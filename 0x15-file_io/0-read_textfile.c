#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * @letters: number of letters to be printed
 * @filename: const char
 * Return: 0 or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t rbytes, wbytes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	rbytes = read(fd, buff, letters);
	if (rbytes == -1)
		return (0);
	wbytes = write(STDOUT_FILENO, buff, rbytes);
	if (wbytes == -1 || wbytes != rbytes)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (rbytes);
}
