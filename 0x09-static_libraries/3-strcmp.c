#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parametre
 * @s2: parametre
 * Return: (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
