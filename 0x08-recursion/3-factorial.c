#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: x
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
