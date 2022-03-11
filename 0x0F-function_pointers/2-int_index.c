#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array
 * @size: number of element in the array
 * @cmp: pointer to the function/to compare
 * Return: the index of the first element for which the cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
