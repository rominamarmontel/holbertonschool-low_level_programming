#include "main.h"


/**
 * sosu - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int sosu(int n, int x)
{
	if (x > n / 2)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (sosu(n, x + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (sosu(n, 2));
}
