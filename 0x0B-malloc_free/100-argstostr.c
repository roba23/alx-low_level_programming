#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - convet arguments to strings
 * @ac: number of arguments
 * @argv: pointers to strings of arrays
 * Return: pointer to string
 */
char *argstostr(int ac, char **argv)
{
	int size, i, j, m;
	char *hold;

	i = j = size = m = 0;
	if (ac == 0 || argv == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			size += 1;

		}
		size += 1;
	}
	hold = malloc((sizeof(char) * size) + 1);
	for (i = 0; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			hold[m] = argv[i][j];
			m++;
		}
		hold[m] = '\n';
		m++;
	}
	hold[m] = '\0';
	return (hold);

}
