#include "main.h"
/**
 * more_numbers - fonction
 * Return: rien
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
