#include "main.h"
/**
 * print_line - fonction
 * @n: number of times the character
 * Return: rien
 */

void print_line(int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
