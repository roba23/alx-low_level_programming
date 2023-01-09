#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array and initialize it using malloc
 * @size:size of array
 * @c: character to initialize it
 * Return: char pointer
 */
char *create_array(int size, char c)
{
	char *m;
	int i;

	i = 0;
	if (size == 0)
		return (NULL);
	m = malloc(size * sizeof(char));
	if (m == NULL)
	{
		printf("memory not allocated");
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	return (m);

}
