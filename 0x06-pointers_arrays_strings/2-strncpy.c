#include <string.h>
/**
 * _strncpy - cotancate two strings
 * @src:  source string
 * @dest: destination to be copied to
 * @n: number of bytes to be copied
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n && dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
