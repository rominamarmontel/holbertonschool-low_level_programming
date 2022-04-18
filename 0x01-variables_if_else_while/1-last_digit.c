#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main
 * Return: return
 */

int main(void)
{
	int n = 0;
	int last = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last < 6 && last != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else if (last == 0)
	printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}

