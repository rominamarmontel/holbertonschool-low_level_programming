#include "main.h"

/**
 * _strchr - locates a character in a string/find the character
 * @s: string pointer to be searched
 * @c: character to find
 * Return: s for the pointer of first character or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)/*NULL is considered to be part of str*/
	{
		if (s[i] == c)/*if c is in s*/
			return (&s[i]);/*return a pointer to the*/
		/* located character*/
	}
	return (0);/*if no character NULL */
}
