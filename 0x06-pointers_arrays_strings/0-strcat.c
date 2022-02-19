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
	int i, j;

	i = 0;
	while (dest[i] != '\0')/*WHILE count character */
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')/*WHILE concatenate dest with src*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';/* add null byte to dest*\/ */
	/* return (dest); */
}
