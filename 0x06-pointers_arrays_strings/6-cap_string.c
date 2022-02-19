#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: param
 * Return: s
 */

char *cap_string(char *s)
{
	int i; /* variable for change to upper */
	int size;
	int j; /* variable element for change (i-1) */

	for (size = 0; s[size] != '\0'; size++) /* calculate size of string */
		;
	if (s[0] >= 97 && s[0] <= 122) /* if 1st letter is lowercase */
		s[0] = s[0] - 32; /* change to uppercase */
	for (i = 1; i < size; i++) /* variable to change uppercase */
	{
		j = i - 1; /* if before i is such a conditon */
		if ((s[j] == ' ' || s[j] == ',' || s[j] == ';' ||
		     s[j] == '.' || s[j] == '!' || s[j] == '?' ||
		     s[j] == '"' || s[j] == '(' || s[j] == ')' ||
		     s[j] == '{' || s[j] == '}' || s[j] == '\t' ||
		     s[j] == '\n') && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] -= 32; /*change i to uppercase */
		}
	}
	return (s);
}
