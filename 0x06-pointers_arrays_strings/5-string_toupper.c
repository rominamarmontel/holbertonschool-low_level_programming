#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters
 * @s: parm
 * Return: s
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122) /* if letter is lowercase */
		{
			s[i] = s[i] - 32; /* change uppercase letters */
		}
	}
	return (s);
}
