#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - create a file with read and write permission
 * for the user 
 * @filename: the file name to create
 * @text_content: text to write to the created file
 * Return:1 on success -1 if it fails
 */
int create_file(const char *filename,char *text_content)
{
	int fd, i;
	
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_RDONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (strlen(text_content) > 0)
	{
		i = write(fd, text_content, strlen(text_content));
		if (i < 0)
			return (-1);
	}
	close(fd);
	return (1);
}

