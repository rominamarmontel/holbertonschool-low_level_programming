#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array
 * @size: size of array
 * @action: function
 * Return: rien
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	if (array != NULL && size != 0 && action != NULL)
		action(array[i]);
	}
}
