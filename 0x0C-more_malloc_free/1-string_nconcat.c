#include <stdlib.h>
#include <stdio.h>
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
	unsigned int s1count, s2count, sizeBuffer, i, j;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	s2count > n ? (s2count = n) : (n = s2count);
	sizeBuffer = s1count + s2count + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s1count; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[j + s1count] = s2[j];
	p[sizeBuffer] = '\0';
	return (p);
}
