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
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
