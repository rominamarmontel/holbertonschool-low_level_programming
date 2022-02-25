#include "main.h"
/**
 * _memset - fill the memory area with the specified characters
 * @s: pointer to the memory
 * @b: letter to set in the memory
 * @n: number of byte to set b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++) /* i is smaller than n and inc */
		s[i] = b; /* fill the memory b to s[i] */
	return (s);
}
