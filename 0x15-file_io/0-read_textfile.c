#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
 * read_textfile - function reads a text from a file and
 * print it out to stdouts
 * @filename: the name of file to read from
 * @letters: the number of letters to read
 * Return: the number of characters read if successfull
 * or zero if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t  r, w;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	close(fd);
	w = write(1, buffer, r);
	if (w == -1 || r == -1 || fd == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (w);
}
