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
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 57)
		{
			putchar(n);
			putchar(44);
			putchar(32);
		}
		else
		putchar(n);
	}
	putchar('\n');
	return (0);
}
