#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 1;
	for (i = 1, i <= 50; i++)
	{
		printf("%d ,", a);
	}
	else if (i == 1)
	{
		printf("%d ,", b);
	}
	else
	{
		c = a + b;
		printf("%d ,", c);
		a = b;
		b = c;
	return (0);
}
