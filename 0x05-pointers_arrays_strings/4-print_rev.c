#include "main.h"
/**
 * print_rev - prints a string,in reverse
 * @s: character
 * Return: rien
 */
void print_rev(char *s)
{
	int i;
	int len;

	while (s[len] != 0)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
