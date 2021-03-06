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
	unsigned int i;
	char *c;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char*);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
