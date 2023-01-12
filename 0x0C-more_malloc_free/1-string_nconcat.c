#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int s1_length, s2_length, sizeBuffer, i, j;
	int m;
	i = j = 0;	
	m = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	if (m >= s2_length)
		m = s2_length;
	sizeBuffer = s1_length + s2_length + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		p[i] = s1[i];
	for (j = 0; j <= m; j++)
	{
		if (j == m)
			p[s1_length + j] = s2[j];
		else
			p[j + s1_length] = s2[j];
	}
	return (p);
}
