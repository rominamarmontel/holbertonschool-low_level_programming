#include "main.h"
/**
 * swap_int - swaps the values of two integers and temp
 * @a: number as integer
 * @b: number as integer
 * Return : rien
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
