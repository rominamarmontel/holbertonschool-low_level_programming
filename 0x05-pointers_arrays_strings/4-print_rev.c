#include "main.h"
#include <unistd.h>
/**
 * print_rev - prints a string,in reverse
 * @s: character
 * Return: rien
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	for (i = s[i]; i <= 0; i++)
	{
		_putchar(s[i]);
		_putchar('\n');
	}
	for (i = s[i]; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
