#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - convert string to words
 * @str: string to be converted
 * Return: pointer to the first array
 */
char **strtow(char *str)
{
	int oc , column, i, j;
	char **p;/* pointer to pointersthat point to arrays */
	int size_word[45];/*array to hold the size of each word */

	oc = i = column = j = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			oc = 1;
			j += 1;
		}
		if (oc && str[i] == ' ')
		{
			size_word[column] = j; 
			oc = 0;
			column += 1;
			j = 0;
		}
	}
	if (oc)
		column += 1;
	printf("column is %d oc is =%d\n", column, oc);

	if (column == 0)
		return (NULL);
	p = malloc((sizeof(char *) * column) + 1);
	for (i = 0; i < column; i++)
	{
		p[i] = malloc((size_word[i] * sizeof(char)) + 1);
	}
	j = 0;
	column = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			oc = 1;
			p[column][j] = str[i];
			j += 1;
		}
		if (oc && str[i] == ' ')
		{
			p[column][j] = '\0';
			oc = 0;
			column += 1;
			j = 0;
		}

	}
	if (oc)
	{
		p[column][j] = '\0';
		p[column + 1] = NULL;
	}
	else
		p[column] = NULL;
	return (p);
}
