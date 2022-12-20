#include "main.h"
#include <string.h>
/**
 * _strcpy - copy string
 * @dest: ok
 * @src: ok
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (i = 0; i < 1000; i++)
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			break;
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
