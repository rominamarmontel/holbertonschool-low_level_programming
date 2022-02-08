#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@n: int type number
 *Return: absolute value of @n
 */

int _abs(int n)
{
	if (n == 0)
	{
		_putchar(0);
	}
	if (n > 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(-n);
	}
	_putchar('\n');
	return (0);
}
