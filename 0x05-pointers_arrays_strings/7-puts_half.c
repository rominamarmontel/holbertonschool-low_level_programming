#include "main.h"
/**
 * puts_half - function
 * @str: param
 * Return: non
 */
void puts_half(char *str)
{
	int i = 0;
	int last = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	last = (i + 1) / 2;
	for (i = last; i <= str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
