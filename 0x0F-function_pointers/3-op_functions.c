#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition
 * @a: number
 * @b: number
 * Return: (a + b)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction/difference
 * @a: number
 * @b: number
 * Return: (a - b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: number
 * @b: number
 * Return: (a * b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: number
 * @b: number
 * Return: (a / b)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo　
 * @a: number
 * @b: number
 * Return: (a % b)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
