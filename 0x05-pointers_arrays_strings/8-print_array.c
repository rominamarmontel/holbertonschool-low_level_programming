#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * @a: string
 * @n: number
 * Return: rien
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0' && i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
	}
	printf("\n");
}
