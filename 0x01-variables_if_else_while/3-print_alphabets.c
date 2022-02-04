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

	while (c < 123 && a < 90)
	{
		putchar(c);
		putchar(a);
		c++;
	}
	putchar('\n');
	return (0);
}
