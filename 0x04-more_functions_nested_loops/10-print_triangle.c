#include "main.h"
/**
 * print_triangle - fonction
 * @size: size of the triangle
 * Return: rien
 */

void print_triangle(int size)
{
	int line;
	int space;
	int hash;

	if (size <= 0)
		_putchar('\n');
	for (line = 0; line < size; line++)
	{
		for (space = 0; space < size - line - 1; space++)
		{
			_putchar(' ');
		}

		for (hash = 0; hash < size - space; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
