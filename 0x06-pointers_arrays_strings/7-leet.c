#include "main.h"
#include <stdio.h>
/**
 * leet -  encodes a string
 * @c: param
 * Return: c
 */

char *leet(char *c)
{
	int i = 0;
	int size;
	char *min = "aeotl";
	char *maj = "AEOTL";
	char *num = "43071";

	for (size = 0; c[size] != 0; size++)
	{
		for (i = 0; i < 5; i++)
		{
			if (c[size] == min[i] || c[size] == maj[i])
				c[size] = num[i];
		}
	}
	return (c);
}
