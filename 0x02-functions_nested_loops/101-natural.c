#include <stdio.h>

/**
 * main - prints the sum check the code
 *
 * Return: (0).
 */
int main(void)
{
	int i, x;
	int sum_i, sum_x;

	sum_i = 0;
	sum_x = 0;
	for (i = 0; i <= 1024; i++ && i % 15 != 0)
		if (i % 3 == 0)
		{
			sum_i += i;
			for (x = 0; x <= 1024; x++)
			{
				if (x % 5 == 0 && x % 15 != 0)
				{
					sum_x += x;
				}
			}
		}
	printf("%d\n", sum_i + sum_x);
	return (0);
}
