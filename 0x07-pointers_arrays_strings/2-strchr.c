#include "main.h"

/**
 * _strchr - locates a character in a string/find the character
 * @s: string pointer to be searched
 * @c: character to find
 * Return: the pointer of last character or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
