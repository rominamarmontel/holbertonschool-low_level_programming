#include <stdio.h>

/**
 * main - print name of program
 * @argv: int
 * @argc: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		(void)*argv;
	printf("%s\n", argv[0]);
	}
	return (0);
}
