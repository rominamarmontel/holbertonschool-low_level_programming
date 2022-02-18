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
	int a;
	int b;
	int c;

	for (a = 48; a <= 55; a++)
		for (b = 49; b <= 56; b++)
			for (c = 50; c <= 57; c++)
				if (a != b && b != c && c != a)
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != 55 || b != 56 || c != 57)
					{
						putchar(44);
						putchar(32);
							}

				}
	putchar('\n');
	return (0);
}
