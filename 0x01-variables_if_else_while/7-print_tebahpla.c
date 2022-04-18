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

	for (min = 'z'; min >= 'a'; min--)
	{
		putchar(min);
	}
	putchar('\n');
	return (0);
}
