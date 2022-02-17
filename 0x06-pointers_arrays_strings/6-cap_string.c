#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * Return:
 */

char *cap_string(char *s)
{
	int i;
	int size;
	int j;

	for (size = 0; s[size] != '\0'; size++)
		;
	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	for (i = 1; i < size; i++)
	{
		j = i - 1;
		if ((s[j] == ' ' || s[j] == ',' || s[j] == ';' ||
		s[j] == '.' || s[j] == '!' || s[j] == '?' || s[j] == '"' ||
		s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}' ||
		s[j] == '\t' || s[j] == '\n') && (s[i] >= 97 && s[i] <= 122))
	        {
			s[i] -= 32;
                }
        }
return (s);
}
