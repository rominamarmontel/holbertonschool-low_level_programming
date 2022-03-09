#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct function
 * @s: param
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;

for (i = 0; *(ops[i].op) !=  *s && ops[i].op != NULL; i++)
return (NULL);
}
