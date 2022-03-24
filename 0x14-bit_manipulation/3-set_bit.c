#include "main.h"

/**
* set_bit - set bit at index
* @n: param
* @index: param
* Return: 1 or -1 if failed
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > (sizeof(n) * 8))
		return (-1);
	i <<= index;
	*n |= i;
	return (1);
}
