#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * p_char - print char
 * @args: arg
 * Return: rien
 */
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * p_int - print int
 *@args: arg
 * Return: rien
 */
void p_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * p_float - print float
 *@args: arg
 * Return: rien
 */
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * p_str - print str
 * @args: arg
 * Return: rien
 */
void p_str(va_list args)
{
	char *str;

	str = va_arg(args, char*);

	if (str == NULL)
		str = ("(nil)");
	printf("%s", str);
}

/**
 * print_all - print all
 * @format: arg
 * Return: rien
 */

void print_all(const char * const format, ...)/*"ceis", 'B', 3, "stSchool"*/
{
	t_print type[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};
	va_list args;
	int i; /*parameter format*/
	int j; /*parameter type function*/
	char *separator = "";

	va_start(args, format);/* start parameter before ...*/

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == *(type[j].c))/*search match*/
			{
				printf("%s", separator);
				type[j].t_func(args);
				separator = ", ";
			}
		}
	}
	printf("\n");
	va_end(args);
}
