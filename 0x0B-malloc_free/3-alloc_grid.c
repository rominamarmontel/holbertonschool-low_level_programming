#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: param
 * @height: param
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if ((width || height) <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);/*count size of memory grid */

	if (grid == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == 0)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
