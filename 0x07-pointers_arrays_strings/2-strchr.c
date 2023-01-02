#include <stdio.h>
/**
 * _strchr - locate a character in a string
 * @s: the string to be checked
 * @c: character to be located
 * Return: return the adress of the first character occurence
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		++i;
	}
	return (p);
}
