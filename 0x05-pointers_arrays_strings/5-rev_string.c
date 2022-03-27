#include "main.h"
/**
 * rev_string - fonction
 * Return: rien
 * @s: param
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;

	for (i = 0; s[i] != '\0'; i++)/*count size of string*/
		;
	for (j = 0; j < i / 2; j++)/*count half size of string*/
	{
		temp = s[j];/* temp ni s[0]=H wo dainyu */
		s[j] = s[i - j - 1]; /* s[0]=5-0-1=4=L wo dainyu */
		s[i - j - 1] = temp;/* s=4 ni temp=H wo dainyu */
	}
}
