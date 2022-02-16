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
	char *ptr = dest + strlen(dest);

	while (*src != 0 && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = 0;
	return (dest);
}
