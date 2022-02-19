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

	while (s1[i] != '\0' && s2[i] != '\0')/* while the same character */
	{
		if (s1[i] != s2[i])/* if different */
		{
			return (s1[i] - s2[i]);/* ASCII 72-87 */
		}
		i++; /* inc */
	}
	return (0); /* if the same */
}
