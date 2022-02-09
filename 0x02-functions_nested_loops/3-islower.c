#include "main.h"

/**
 *_islower - checks for lowercase character
 *Return: 1 if lowercase, 0 if not lowercase
 *@c: char type letter
 */

int _islower(int c)
{
	for (c >= 97 && c <= 122)
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}
	_putchar('\n');
}
