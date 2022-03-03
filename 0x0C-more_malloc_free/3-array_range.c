#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: param
 * @max: param
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int dif;

	if (min > max)
		return (NULL);

	dif = max - min + 1;
	ar = malloc (dif * sizeof(int));

	if (ar == 0)
		return (NULL);

	for (i = min; i <= dif; i++)
	{
		ar[i - min] = min;
	}
	return (ar);
}
