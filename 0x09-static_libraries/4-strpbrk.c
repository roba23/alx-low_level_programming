#include <stdio.h>
/**
 * _strpbrk - find first similarity bn strings
 * @s: first string
 * @accept: second string
 * Return: return a pointer if there is a match
 * return NULL if there is no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (NULL);
}
