#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: param
 * @size: param
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)/*calloc initialize a zero all bytes*/
	{
		ptr[i] = 0;
	}
	return (ptr);
}
