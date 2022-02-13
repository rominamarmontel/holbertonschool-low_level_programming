#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int x;

	for (i = 1; i <= 50; i++)
		x = (i - 1) + (i - 2);
	printf("%d ,", x)
	return (0);
}
