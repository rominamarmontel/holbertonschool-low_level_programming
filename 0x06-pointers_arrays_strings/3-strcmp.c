#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parametre
 * @s2: parametre
 * Return: (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)/*count size of s1*/
	{
	}
	for (i = 0; s2[i] != '\0'; i++)/*count size of s2*/
	{
		if (s1[i] != s2[i])/*if different size */
		{
			return (s1[i] - s2[i]);/*ASCII 72-87*/
		}
	}
	return (0);/*if the same*/
}
