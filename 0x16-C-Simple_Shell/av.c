#include <stdio.h>

/**
 * main - function
 * @ac: number of items in av
 * @av: array of strings
 */

int main()
{
	char **av = NULL;
	int i;

	for (i = 0; av[i] != '\0'; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}

