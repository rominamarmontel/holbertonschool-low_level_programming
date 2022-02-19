#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *_strncat - function
 *@dest: param
 *@src: param
 *@n: number
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')/* WHILE count character */
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')/* WHILE concatenate dest with src */
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';/* add null byte */
	return (dest);
}
