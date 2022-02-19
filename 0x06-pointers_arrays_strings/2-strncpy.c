#include "main.h"
#include <stdio.h>
/**
 * char *_strncpy - function
 * @dest: param
 * @src: param
 * @n: number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')/* while copy, n is smaller than i */
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)/* add NULL to dest when n is smaller than i */
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
