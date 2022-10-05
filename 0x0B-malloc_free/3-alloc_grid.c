#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: the array columns
 * @height: the array rows
 *
 * Return:  return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridArray;

	if (height <= 0 || width <= 0)
		return (NULL);

	gridArray = malloc(sizeof(int *) * height);

	if (gridArray == NULL)
	{
		free(gridArray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridArray[i] = malloc(sizeof(int) * width);
		if (gridArray[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gridArray[j]);
			}
			free(gridArray);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridArray[i][j] = 0;
		}
	}
	return (gridArray);
}
