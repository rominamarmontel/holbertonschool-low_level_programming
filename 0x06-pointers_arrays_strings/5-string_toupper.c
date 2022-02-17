#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 *
 * Return: rien
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; i < i <= strlen(str); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	}
	return (0);
}
