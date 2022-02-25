#include "main.h"
#include<stdio.h>
/**
 * _atoi - function
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	int sign = 1;

	while (s[i] == ' ' || s[i] == '+' || s[i] == '#' || s[i] == ':')
	{
		i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (sign * num);

}
