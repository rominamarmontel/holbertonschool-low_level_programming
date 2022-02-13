#include <stdio.h>

/**
 * main - prints the sum check the code
 *
 * Return: (0).
 */
int main(void)
{
	int i;
	int x;
	int sum;

	for (i = 0; i < 1024; i += 3)
	{
		for (i = 0; i < 1024; i += 5)
			sum += i;
		sum += x;
		printf("%d\n", i + x);
		return (0);
	}
