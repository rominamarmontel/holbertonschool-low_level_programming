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
	int i = 0;

	while (src[i] != '\0') /* while copy src */
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /* add NULL to dest */
	return (dest);
}
