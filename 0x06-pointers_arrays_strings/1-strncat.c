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
	int dlen = 0;
	int j = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
