#include "main.h"
/**
 * _strstr - find a character in the string
 * @haystack: string
 * @needle: character to find
 * Return: the same character or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
		while (haystack[i] == needle[j])
		{
			if (haystack[i + j] == needle[j])
				return (&haystack[i]);
			j++;
		}
		}
	}
	return (0);
}
