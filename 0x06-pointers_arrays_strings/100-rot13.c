#include "main.h"
/**
 * rot13 - fonction
 * @s: param
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alpha[j] == s[i])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}


