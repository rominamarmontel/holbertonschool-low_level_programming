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

	for (i = 0; s[i] >= '\0'; i++)/*NULL wo fukumu hello wo count*/
	{
		if (s[i] == c)/*hello ni l wo dainyu*/
			return (&s[i]);/*saisho no mojino address de return*/
	}
	return (0);
}
