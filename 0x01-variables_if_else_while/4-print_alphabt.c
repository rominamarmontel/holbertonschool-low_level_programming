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
	char c;

	for (c = 97; c <= 122; c++)
		if (c != 113 && c != 101)
		{
			putchar(c);
		}
	putchar('\n');
	return (0);

}
