#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - convet arguments to strings
 * @ac: number of arguments
 * @av: pointers to strings of arrays
 * Return: pointer to string
 */
char *argstostr(int ac, char **argv)
{
	int size, i, j, sum, m;
	char *hold;
	i = j = size = sum = m = 0;
	if (ac == 0 || argv == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; argv[i][j]; j++)
			{
				sum += 1;

			}
	}
	hold = malloc((sizeof(char) * size) + size);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			hold[m] = argv[i][j];
			m++;
		}
		hold[m] = '\n';
		m++;
	}
	return (hold);

}
