#include "main.h"
/**
 *_isalpha - check if an alphabetic character
 *@c: char type int letter
 *Return: 0 if a letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
