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
	int i = 0;
	int a = 10;

	while (i < 9)
	{
		putchar(i);
		i++;
	}
	while (a < 16)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
