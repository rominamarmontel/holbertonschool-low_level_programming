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
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
