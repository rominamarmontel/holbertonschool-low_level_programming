#include "main.h"
#include <stddef.h>
/**
 * _strstr - find a character in the string
 * @haystack: string
 * @needle: character to find
 * Return: the same character or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (haystack == 0)
		return (0);

	for (; haystack[i] != '\0'; i++)
	{
		j = 0;

		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}
