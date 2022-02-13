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
	int sum_i;
	int sum_x;

	for (i = 0; i <= 1024; i += 3)
	{
		sum_i += i;
		for (i = 0; x <= 1024; x += 5)
		{
			sum_x += x;
			printf("%d\n", sum_i + sum_x);
			return (0);
		}
	}
}
