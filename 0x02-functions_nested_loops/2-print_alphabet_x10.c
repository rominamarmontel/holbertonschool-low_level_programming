#include "main.h"

/**
 *print_alphabet_x10 - programm prints 10 times
 *
 *Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char min;
	int time;

	for (time = '0'; time <= '9'; time++)
	{
		for (min = 'a'; min <= 'z'; min++)
		{
			_putchar(min);
		}
		_putchar('\n');
	}
}
