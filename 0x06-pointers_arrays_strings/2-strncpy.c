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

	for (i = 0; src[i] != '\0' && i < n; i++)/*src n-byte wo dest no atama kara*/
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)/*n no nagasa ga src yori chiisai baai wa NULL wo copy*/
	{
		dest[i] = '\0';
	}
	return (dest);
}
