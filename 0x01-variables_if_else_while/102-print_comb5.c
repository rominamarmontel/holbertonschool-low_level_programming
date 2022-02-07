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
	int x, y;

	for (x = '0'; x < '100'; x++)
	{
		for (y = '0'; y < '100'; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(' ');
				putchar(y);
				if (x != '100' && y != '100')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
