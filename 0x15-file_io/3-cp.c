#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * file_from - prints error for file 1
 * @filename: file name
 * Return: Nothing
 */
void file_from(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * file_to - printe error if file to has errors
 * @filename: file name
 * Return: Nothing
 */
void file_to(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * main - the function copies from one file to another
 * @argc: count the number of arguments
 * @argv: array containing arguments
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int f1, f1r, f2, f2w;
	char buffer[1024];

	f1r = 1;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		file_from(argv[1]);
	f2 = open(argv[2], O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC,
			S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (f2 == -1)
		file_to(argv[2]);
	while ((f1r = read(f1, buffer, 1024)) > 0)
	{
		if (f1r < 0)
			file_from(argv[0]);
		f2w = write(f2, buffer, 1024);
		if (f1r != f2w || f2w < 0)
			file_to(argv[2]);
	}
	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
