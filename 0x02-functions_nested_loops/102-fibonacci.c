#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		i = i + (i - 1);
		printf("%d\n", i);
	}
	return (0);
}
