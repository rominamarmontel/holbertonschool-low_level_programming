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
	char min;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (min = 'a'; min <= 'f'; min++)
	{
		putchar(min);
	}
	puthcar('\n');
	return (0);
}
