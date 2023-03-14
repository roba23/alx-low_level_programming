#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * find - assigning value
 * @i: i value
 * @column: pointer to cilumn
 * @j: pointer to j
 * @oc: pointer to oc
 * @str: pointer to the string
 * @size_word: pointer to array
 * Return: nothing
 */
void find(int *i, int *column, int *j, int *oc, char *str, int *size_word)
{
	int m, n, col, occu;

	m = n = col = occu = 0;
	for (m = 0; str[m]; m++)
	{
		if (str[m] != ' ')
		{
			occu = 1;
			n += 1;
		}
		if (occu && str[m] == ' ')
		{
			size_word[col] = n;
			occu = 0;
			col += 1;
			n = 0;
		}
	}
	if (occu == 1)
	{
		col += 1;
		n += 1;
	}
	*i = m;
	*j = n;
	*column = col;
	*oc = occu;

}

/**
 * strtow - convert string to words
 * @str: string to be converted
 * Return: pointer to the first array
 */
char **strtow(char *str)
{
	int oc, column, i, j;
	char **p;/* pointer to pointersthat point to arrays */
	int size_word[45];/*array to hold the size of each word */

	oc = i = column = j = 0;
	if (str == NULL)
		return (NULL);
	find(&i, &column, &j, &oc, str, size_word);
	if (column == 0)
		return (NULL);
	p = malloc((sizeof(char **) * (column + 1)));
	for (i = 0; i < column; i++)
	{
		p[i] = malloc((size_word[i] + 1) * sizeof(char) + j);
	}
	j = column = 0;
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
