#include "main.h"
/**
 * rev_string - fonction
 * Return: rien
 * @s: param
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	int temp;

	while (s[len] != '\0')/*count size of string */
	{
		len++;
	}
	for (i = 0; i < len / 2; i++) /* count loop number with len/2 */
	{
		temp = s[i]; /* temp ni s[0]=H wo dainyu */
		s[i] = s[len - i - 1]; /* s[0]=5-0-1=4=L wo dainyu */
		s[len - i - 1] = temp; /* s=4 ni temp=H wo dainyu */
	}
}
