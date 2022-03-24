#include "main.h"

/**
* clear_bit - clear bit at index
* @n: pointer unsigned long int
* @index: insigned int
* Return: 1 or -1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
