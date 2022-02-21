#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory pointer of destination
 * @src: the memory pointer of source
 * @n: the number of byte to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)/*src no n made wo dest ni copy*/
	{
		dest[i] = src[i];
	}
	return (dest);
}
