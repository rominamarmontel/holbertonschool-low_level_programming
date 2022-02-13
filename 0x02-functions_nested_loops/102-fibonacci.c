#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, f1, f2, f3;

	f1 = 1;
	f2 = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i == 0)
		{
			printf("%d ,", f1);
		}
		else if (i == 1)
			printf("%d ,", f2);
	}
	else
	{
		f3 = f1 + f2;
		printf("%d ,", f3);
		f1 = f2;
		f2 = f3;
		return (0);
	}
