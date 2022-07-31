#include "main.h"
/**
 * puts_half - function
 * @str: param
 * Return: non
 */
void puts_half(char *str)
{
	int i;
	int half;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (half = (i + 1) / 2; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
