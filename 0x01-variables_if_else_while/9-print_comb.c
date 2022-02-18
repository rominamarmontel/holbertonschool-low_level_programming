#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - mai
 *Return:return
 */

int main(void)
{
	int n;
	int j;

	for (n = 48; n <= 57; n++)
		for (j = 48; j <= 57; j++)
			if (n != j)
			{
				putchar(n);
				putchar(j);
				putchar(', ');
			}
	putchar('\n');
	return (0);
}
