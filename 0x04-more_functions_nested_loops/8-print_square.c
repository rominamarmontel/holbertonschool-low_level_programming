#include "main.h"
/**
 * print_square - fonction
 * @size: the size of the square
 * Return: rien
 */

void print_square(int size)
{
	int i;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
