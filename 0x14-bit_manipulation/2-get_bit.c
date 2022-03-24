#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: param
 * @n: param
 * Return: index, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	return (0);
}
