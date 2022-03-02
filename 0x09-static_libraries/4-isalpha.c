#include "main.h"
/**
 *_isalpha - check if an alphabetic character
 *@c: char type int letter
 *Return: 0 if a letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
