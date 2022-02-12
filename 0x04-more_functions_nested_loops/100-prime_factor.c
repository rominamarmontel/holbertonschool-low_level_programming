#include <stdio.h>

/**
 * the largest prime factor -
 * Return : rien
 */

int main(void)
{
	int i;
	long int x;

	i = 2;
	x = 612852475143;

	for (i = 2; i <= x; i++)
	{
		while (x % i == 0)
		{
			x = x / i;
		}
	}
	printf("%ld" , i);
	return (0);
}
