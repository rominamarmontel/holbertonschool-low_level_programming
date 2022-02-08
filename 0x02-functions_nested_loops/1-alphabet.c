#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/

/**
 *main - check the code
 *
 *Return: Always 0.
 */

void print_alphabet(void);
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}

int main(void)
{
	print_alphabet(void);
	return (0);
}
