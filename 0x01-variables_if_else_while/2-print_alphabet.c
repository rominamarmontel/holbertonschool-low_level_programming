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
	putchar n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;

	for(n='a'; n<='z'; ++n)
		putchar("%c", n);
	return (0);
}



