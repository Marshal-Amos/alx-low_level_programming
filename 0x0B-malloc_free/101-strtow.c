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

void free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height]);
		}
		free(grid[height]);
		free(grid);
	}
}


/**
 * strtow - a function that splits a string into words
 *
 * @str: string
 *
 * Return: function returns a pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 * it returns NULL when it fails
 */

char **strtow(char *str)
{
	char **strArr;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	strArr = malloc((height + 1) * sizeof(char *));
	if (strArr == NULL || height == 0)
	{
		free(strArr);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				strArr[i] = malloc((c - k + 2) * sizeof(char));
				if (strArr[i] == NULL)
				{
					free_grid(strArr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			strArr[i][j] = str[k];
		strArr[i][j] = '\0';
	}
	strArr[i] = NULL;
	return (strArr);
}
