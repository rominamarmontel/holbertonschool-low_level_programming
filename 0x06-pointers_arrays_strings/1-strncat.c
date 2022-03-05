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

	for (i = 0; dest[i] != '\0'; i++)/*count size dest*/
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)/*count size src until n*/
	{
		dest[i] = src[j];/*concatenate j to dest*/
		i++;/*don't forget to increment i*/
	}
	dest[i] = 0;/*add 0 to dest*/
	return (dest);
}
