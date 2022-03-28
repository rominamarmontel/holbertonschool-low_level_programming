#include "main.h"
/**
 * _strpbrk - scan the character and stop when it encounters a character
 * @s: string
 * @accept: character specified
 * Return: the address of the first character or NULL
 */
/*文字列s1で、文字群s2中のいずれかの文字が見つかった最初の位置（ポインタ）を返却*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++) /* size of s */
	{
		for (j = 0; accept[j] != '\0'; j++) /* size of accept */
		{
			if (s[i] == accept[j]) /* if adress of s == accept */
			{
				return (&s[i]); /* return s &&  s + i */
			}
		}
	}
	return (0);
}
