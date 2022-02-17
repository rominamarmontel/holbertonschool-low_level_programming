#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * Return:
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0)
		{
			if((s[i] >= 97 && s[i] <= 122))
				s[i] = s[i] - 32;
		}
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i++;
			if(s[i] != 46 && s[i] != 68)
			{
				s[i] = s[i] - 32;
			}
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		}
		else
		{
			if (s[i] >= 41 && s[i] <= 90)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
