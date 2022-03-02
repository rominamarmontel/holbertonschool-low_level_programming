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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
