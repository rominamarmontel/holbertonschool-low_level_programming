#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: sequence of characters
 * Return: count/number of character
 *
 *文字列s1の先頭から順に調べ、
 *s2に含まれている文字の並びの
 *いずれかの文字が何文字続くかを返す
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++) /* size of s */
	{
		for (j = 0; accept[j] != '\0'; j++) /* size of j */
		{
			if (count != i) /*if count is not in s */
				break;
			else if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
