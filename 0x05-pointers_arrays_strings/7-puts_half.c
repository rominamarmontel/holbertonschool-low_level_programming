#include "main.h"
/**
 * puts_half - function
 * @str: param
 * Return: non
 */
void puts_half(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != 0)
		i++;
		x = i;
		if (i % 2 == 0)
			for (i = (i / 2); i != x; i++)
			{
				_putchar(str[i]);
			}
		else
		{
			for (i = ((i + 1) / 2); i != x; i++)
			{
				_putchar(str[i]);
			}
		}
		_putchar('\n');
}
