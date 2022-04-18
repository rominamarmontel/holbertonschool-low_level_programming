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
	char min;
	char maj;

	for (min = 'a'; min <= 'z'; min++)
	{
		putchar(min);
	}
		for (maj = 'A'; maj <= 'Z'; maj++)
		{
			putchar(maj);
		}
		putchar('\n');
		return (0);
}
