#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate a string from one string to another
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate to string 1
 * Return:pointer for the first string
 */
char *string_nconcat(char *s1, char *s2, int n)
{
	int i, j;
	int s1_length;
	int s2_length;
	char *p;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	s1_length = (int)strlen(s1);
	s2_length = (int)strlen(s2);
	p = malloc(s1_length + s2_length + 1);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	if (n >= s2_length)
		n = s2_length;
	for (i = 0; i < s1_length; i++)
		p[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		if (j == n)
			p[j + s1_length] = '\0';
		else
			p[j + s1_length] = s2[j];
	}
	return (p);
}
