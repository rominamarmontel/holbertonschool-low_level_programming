#include "main.h"
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

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
				return (&haystack[i]);
			}
		}
		else
			i++;
	}
	return (0);
}
