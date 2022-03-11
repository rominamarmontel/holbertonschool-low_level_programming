#include "variadic_functions.h"

/**
 * pr_char - function char
 * @args: para
 * Return: rien
 */
void pr_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * pr_int - function int
 *@args: para
 * Return: rien
 */
void pr_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * pr_float - function float
 *@args: para
 * Return: rien
 */
void pr_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * pr_str - function str
 * @args: para
 * Return: rien
 */
void pr_str(va_list args)
{
	char *str;
	str = va_arg(args, char*);

	if(str == NULL)
		str = ("(nil)");
	printf("%s", str);
}
/**
 * print_all - print all
 * @format: param
 * Return: rien
 */
void print_all(const char * const format, ...)/*"ceis", 'B', 3, "stSchool"*/
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";

	print fun[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{NULL, NULL}
	};

	va_start(args, format);/* parametre before ...*/

		while (format != NULL && format[i] != '\0')
		{
			while (fun[j].c != NULL && *(fun[j].c) != format[i])
				j++;

			if (fun[j].c != NULL)
			{
				printf("%s", separator);
				fun[j].f(args);
				separator = ", ";
			}
			i++;
			j = 0;
		}
	printf("\n");
	va_end(args);
}
