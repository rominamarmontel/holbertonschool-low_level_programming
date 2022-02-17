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
	int min[] = {97, 101, 111, 116, 108};
	int maj[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	for (size = 0; c[size] != 0; size++)
	{
		for (i = 0; i < 4; i++)
		{
			if (c[size] == min[i] || c[size] == maj[i])
				c[size] = num[i];
		}
	}
	return (c);
}
