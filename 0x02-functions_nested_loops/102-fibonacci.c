#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int n;

	for (i = 1; i <= 50; i++)
	{
		n = (i + 1) + (i + 2);
		printf("%d, ", n);
	}
	return (0);
}