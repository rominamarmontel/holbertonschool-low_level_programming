#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: char
 * @n: integer
 * Return: rien
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *c;
	unsigned int i;

	va_start(args, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			c = va_arg(args, char*);
			if (c == NULL)
				printf("nil");
			else
				printf("%s", c);
			if (i != n - 1)
			{
				if (separator == NULL)
					printf("");
				else
					printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
