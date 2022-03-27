#include "main.h"
/**
 * print_rev - prints a string,in reverse
 * @s: character
 * Return: rien
 */
void print_rev(char *s)
{
	int i;
	int last;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (last = i - 1; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
