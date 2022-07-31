#include  "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: matrix number
 * Return: rien
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size * size; i = i + size + 1)
	{
		sum1 += a[i];
	}
	for (j = size - 1; j < size * size - (size - 1); j = j + size - 1)
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
