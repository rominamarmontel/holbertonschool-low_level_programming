#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/

/**
 *main - main
 *Return:return
 */

int main(void)
{
	int c = 97;
	int a = 65;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	while (a < 91)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
