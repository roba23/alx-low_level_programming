#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies a string to a new allocated memory space
 * @str: the string to be duplicated
 * Return: a pointer to a character or
 * NULL if we can not allocate a space
 */
char *_strdup(char *str)
{
	char *l;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	l = malloc((strlen(str) * sizeof(char)) + 1);
	if (l == NULL)
		return (NULL);
	for (i = 0; i < (int)strlen(str); i++)
	{
		l[i] = str[i];
	}
	return (l);

}
