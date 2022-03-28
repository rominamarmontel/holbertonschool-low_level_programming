#include "main.h"
#include <stdio.h>
/**
 * print_number - fonction
 * @n: param
 * Return: rien
 */
void print_number(int n)
{
        unsigned int div = 1;
	unsigned int m;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
		m = n;

	printf("m = %d\n", m);
	while (m / (div * 10) != 0)
	{
		div = div * 10;
	}

	printf("div = %d\n", div);
	while (div > 0)
	{
		_putchar((m / div) + 48);
		m = m % div;
		div = div / 10;
	}
}
