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
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (s1[0] != s2[0])
		return (s1[0] - s2[0]);
	}
	return (0);
}
