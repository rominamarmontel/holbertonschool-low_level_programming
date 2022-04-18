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

	for (min = 'a'; min <= 'z'; min++)
	{
		if (min != 'q' && min != 'e')
		putchar(min);
	}
	putchar('\n');
	return (0);
}
