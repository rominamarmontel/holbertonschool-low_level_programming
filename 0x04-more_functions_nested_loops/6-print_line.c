#include "main.h"
/**
 * print_line - fonction
 * @n: number of times the character
 * Return: rien
 */

void print_line(int n)
{
	int i = 0;

	while (n > 0 && i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
