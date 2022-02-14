#include "main.h"
/**
 * rev_string - fonction
 * Return: rien
 * @s: param
 */
void rev_string(char *s)
{
	int i, len, temp;

	i = 0;
	len = 0;

	while (s[i] != 0)
		i++;
	for (len = 0;len < i / 2; len++)
	{
		temp = s[len];
		s[len] = s[i - len - 1];
		s[i - len - 1] = temp;
	}
}
