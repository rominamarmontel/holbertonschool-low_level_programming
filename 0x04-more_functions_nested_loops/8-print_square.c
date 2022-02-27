#include "main.h"
/**
 * print_square - fonction
 * @size: the size of the square
 * Return: rien
 */

void print_square(int size)
{
	int y;
	int t;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
			for (t = 0; t < size - 1; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
