#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: an array of 2 dimensions
 * @height: the array rows
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
