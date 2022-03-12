#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - select the correct function
 * @s: operator passed as argument
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = { /*inisialiser op_t ops=kozotaihensu */
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
int i = 0;
/* kozotai hensu.member hensu(char *op no op) */
while (ops[i].op != NULL && *(ops[i].op) != *s)
{/* ops[i] nai no menmber op ga NULL denaku s demonai */
	i++;
}
return (ops[i].f);/* ops[i] nai no member f ga return */
}
