#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - create a meomry space for 2d array
 * @width: number of columuns
 * @height: number of rows
 * Return: return pointer of pointers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = j = 0;
	p = malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	}
	return (p);

}


