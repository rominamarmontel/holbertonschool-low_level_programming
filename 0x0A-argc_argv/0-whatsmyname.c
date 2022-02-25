#include <stdio.h>
#include <stdlib.h>

/**
 * main:
 * Return: 0
 * @argv: param
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	printf("argc = %s\n", argv[i]);
	return (0);
}
