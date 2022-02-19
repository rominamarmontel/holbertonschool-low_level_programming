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
	int i = 0;
	int temp;

	while (i < n--) /* decliment n for reverse */
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}

}
