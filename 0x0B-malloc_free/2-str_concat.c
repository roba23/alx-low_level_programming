#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings and return a string to the first string
 * @s1:first string
 * @s2: string two
 * Return:pointer if succesfull and NULL if
 * it fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s1_size, s2_size;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if(s2  == NULL)
		s2 = "";
	i = j = 0;
	s1_size = (int)strlen(s1);
	s2_size = (int)strlen(s2);
	p = malloc((sizeof(char) * (s1_size + s2_size)) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = i; s2[j] != '\0'; j++)
	{
		p[s1_size + j] = s2[j];
	}
	p[j] = '\0';
	return (p);
}
