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
	int sumx;
	int sumi;

	for (i = 0; i <= 1024; i += 3)
	{
		for (i = 0; i <= 1024; i += 5)
			sumi += i;
		sumx += x;
		printf("%d\n", sumi + sumx);
		return (0);
	}
