#include "main.h"
#include <string.h>
/**
 * char *_strcpy - function
 * @dest: param
 * @src: param
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] >= 0; i++)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			break;
	}
	return (dest);
}