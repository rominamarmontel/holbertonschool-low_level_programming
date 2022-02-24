#include "main.h"


/**
 * sosu - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int sosu(int a, int b)
{
	if (a < b * b)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (sosu(a + 1, b));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (sosu(2, n));
}
