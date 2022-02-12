#include <stdio.h>

/**
 * main - print factor of the number 612852475143
 * Return: void
 */

int main(void)
{
	int i;
	long int x;

	i = 2;
	x = 612852475143;

	for (i = 2; i < x; i++)
	{
		while (x % i == 0)
		{
			x = x / i;
		}
	}
	printf("%d\n", i);
	return (0);
}
