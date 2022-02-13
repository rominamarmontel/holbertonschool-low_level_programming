#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int f1, f2, f3;
	int i;

	f1 = 1;
	f2 = 2;
	printf("1, 2");
	for (i = 1; i <= 50; i++)
	{
		f3 = f1 + f2;
		printf(" ,%d", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
