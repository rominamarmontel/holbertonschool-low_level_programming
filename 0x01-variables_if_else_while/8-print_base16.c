#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - main
 *Return:return
 */

int main(void)
{
	int n = 48;

	if (n >= 48 && n <= 57)
	{
		putchar(n);
		putchar(',');
		n++;
	}
	putchar('\n');
	return (0);
}
