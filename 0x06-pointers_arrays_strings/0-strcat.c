#include <string.h>
/**
 * _strcat - cotancate two strings
 * @src:  source string
 * @dest: destination to be copied to
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, size, sizes;

	size = strlen(dest);
	sizes = strlen(src);
	i = 0;
	for (i = 0; i < sizes; i++)
	{
		if (src[i] == '\0')
			break;
		dest[size + i] = src[i];
	}
	return (dest);
}
