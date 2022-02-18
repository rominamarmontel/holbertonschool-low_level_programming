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

	for (min = 97; min <= 122; min++)
	{
		putchar(min);
	}
	for (maj = 65; maj <= 90; maj++)
	{
		putchar(maj);
	}
	putchar('\n');
	return (0);
}
