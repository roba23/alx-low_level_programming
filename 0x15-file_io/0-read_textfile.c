#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
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
	ssize_t  m;
	int i;
	char buffer[65534];

	if (filename == NULL || letters == 0)
		return (0);
	i = 0;
	m = letters;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = read(fd, buffer, letters);
	if (i == -1)
		return (0);
	m = i;
	buffer[i] = '\0';
	lseek(fd, 0, SEEK_SET);
	i = write(1, buffer, m);
	if (i == -1 || m != i)
		return (0);
	close(fd);
	return (m);
}
