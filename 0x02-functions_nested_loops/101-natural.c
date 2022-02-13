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
	int sum_x;
	int sum_i;

	for (i = 0; i <= 1024; i++)
		if (i / 3 == 0)
		{
			sum_i += i;
			if (x / 3 == 0)
			{
				sum_x += x;
			}
			printf("%d\n", sum_i + sum_x);
			return (0);
		}
}
