#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string
 * @str: value to be evaluate
 * Return: rien
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
