#include "main.h"
/**
 *_isalpha - check if an alphabetic character
 *@c: char type int letter
 *Return: 0 if a letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	char min;
	char maj;

	for (min = 'a'; min <= 'z'; min++)
	{
		for (maj = 'A'; maj <= 'Z'; maj++)
		{
			if (c == min || c == maj)
			return (1);
		}
	}
	return (0);
}
