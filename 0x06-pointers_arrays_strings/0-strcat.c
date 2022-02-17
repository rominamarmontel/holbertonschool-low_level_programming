#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: param
 * @src: parm
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dlen = 0;

	while (dest[dlen])
	{
		dlen++;
			}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
			}
	dest[dlen] = '\0';
	return (dest);
}
