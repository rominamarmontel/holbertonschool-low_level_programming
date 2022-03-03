#include "main.h"
/**
 * puts_half - function
 * @str: param
 * Return: non
 */
void puts_half(char *str)
{
	int i;
	int last;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (last = (i + 1) / 2; str[last] != '\0'; last++)
	{
		_putchar(str[last]);
	}
	_putchar('\n');
}
