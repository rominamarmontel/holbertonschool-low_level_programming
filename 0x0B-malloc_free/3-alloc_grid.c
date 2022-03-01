#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: param
 * @height: param
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if ((width || height) <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (!a)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (!a[i])
		{
			for (i = 0; i < height; i++)
				free(a[i]);
			free(a);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
