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
	int i = 48;
	int a = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
