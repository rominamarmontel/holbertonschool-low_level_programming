#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, i;

	a = 0;
	b = 1;
	for (i = 0, i <= 50; i++)
		printf("%d ,", c = a + b);
	a = b;
	b = c;
	return (0);
}
