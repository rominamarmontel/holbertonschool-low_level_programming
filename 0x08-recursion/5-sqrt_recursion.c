#include "main.h"

/**
 * sqr - checks for the square root
 * @a: length of square
 * @b: area of square
 *
 * Return: int
 */

int sqr(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqr(a + 1, b));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: param
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqr(1, n));
}
