#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
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
	f2 = open(argv[2], O_RDONLY | O_WRONLY | O_TRUNC,
			S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while (f1r)
	{
		f1r = read(f1, buffer, 1024);
		if (f1 < 0 || f1r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		f2w = write(f2, buffer, 1024);
		if (f1r != f2w || f2 < 0 || f2w < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
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
