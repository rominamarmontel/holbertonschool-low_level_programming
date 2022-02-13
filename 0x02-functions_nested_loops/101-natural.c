#include <stdio.h>

/**
 * main - prints the sum check the code
 *
 * Return: (0).
 */
int main(void)
{
	int i;

	for (i = 0; i <= 1024; i++)
		while (i / 3 == 0 || i / 5 == 0)
		{
			sum += i;
			printf("%d\n", sum);
			return (0);
		}
}
