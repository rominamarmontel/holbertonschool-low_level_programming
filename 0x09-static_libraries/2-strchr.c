#include "main.h"

/**
 * _strchr - locates a character in a string/find the character
 * @s: string pointer to be searched
 * @c: character to find
 * Return: the pointer of last character or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (*s == c)
	{
		return (s);
	}
	return (0);
}
