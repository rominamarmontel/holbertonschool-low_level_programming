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
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
		while (haystack[i] == needle[j])
		{
			if (haystack[i + j] == needle[j])
				return (&haystack[i]);
			j++;
		}
		}
	}
	return (NULL);
}
