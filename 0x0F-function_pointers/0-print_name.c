#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be printed
 * @f: A pointer to a function for printing
 * Return: rien
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
