#include <stdio.h>
/**
 * _strchr - locate a character in a string
 * @s: the string to be checked
 * @c: character to be located
 * Return: return the adress of the first character occurence
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
