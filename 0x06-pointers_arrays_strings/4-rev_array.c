#include "main.h"
#include "stdio.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: param
 * @n: param
 * Return: rien
 */
void reverse_array(int *a, int n)
{
	int i;
	int low, high;

	for (i = 0; i < n; i++)
	{
	}
	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		int temp = a[low];

		a[low] = a[high];
		a[high] = temp;
	}

}
