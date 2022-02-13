#include <stdio.h>

/**
 * main - prints the sum check the code
 *
 * Return: (0).
 */
int main(void)
{
	int i, x;

	for (i = 0; i <= 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
		{
			x += i;
		}
	printf("%d\n", x);
	return (0);
}
