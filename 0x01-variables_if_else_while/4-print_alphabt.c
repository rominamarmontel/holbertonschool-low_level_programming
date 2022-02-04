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
	int c = 97;

	c = 'a';

/* while loop execution */

	do {
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		} else
			c++;
	} while (c <= 'z');
	putchar ('\n');
	return (0);
}
