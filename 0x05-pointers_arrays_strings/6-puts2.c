#include "main.h"
/**
 * puts2 - function
 * @str: param
 * Return: rien
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n %  2 == 0)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
