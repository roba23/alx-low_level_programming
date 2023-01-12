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
	unsigned int s1_length, s2_length, sizeBuffer, i, j;

	i = j = 0;	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_length = (unsigned int)strlen(s1);
	s2_length = (unsigned int)strlen(s2);
	if (n > s2count)
		n = s2count;
	sizeBuffer = s1_length + s2_length + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		p[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		if (j == n)
			p[s1_length + j] = s2[j];
		else
			p[j + s1_length] = s2[j];
	}
	return (p);
}
