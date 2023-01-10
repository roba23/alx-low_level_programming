#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free asigned grid
 * @grid: matrix passed to be filled
 * @height: the height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	for (i = 0; i < height; i++)
		free(grid[i]);		
	free(grid);
}
	
