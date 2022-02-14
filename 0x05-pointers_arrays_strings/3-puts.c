#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string
 * @str: value to be evaluate
 * Return: rien
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
