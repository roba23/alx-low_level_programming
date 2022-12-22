#include <string.h>
/**
 * _strncat - cotancate two strings
 * @src:  source string
 * @dest: destination to be copied to
 * @n: number of bytes to be copied
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, size;

	size = strlen(dest);
	i = 0;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[size+i] = src[i];
	}
	return (dest);
}
