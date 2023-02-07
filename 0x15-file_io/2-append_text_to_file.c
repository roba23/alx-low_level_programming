#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - append text to a file
 * @filename: file name to write to
 * @text_content: the text to append to the file
 * Return: return 1 0n success and -1 if it fails
 */
int append_text_to_file(const char *filename, const char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDONLY | O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		i = write(fd, text_content, strlen(text_content));
		if (i < 0)
			return (-1);
	}
	return (1);
}

