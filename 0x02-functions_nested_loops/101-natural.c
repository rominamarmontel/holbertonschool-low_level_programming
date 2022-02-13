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

	for (i = 0; i <= 1024; i++)
		if (i / 3 == 0)
		{
			sum_i += i;
			for (x = 0; x <= 1024; x++)
			{
				if (x / 5 == 0)
				{
					sum_x += x;
				}
			}
		}
	printf("%d\n", sum_i + sum_x);
	return (0);
}
