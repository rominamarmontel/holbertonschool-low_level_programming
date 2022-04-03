#include <stdio.h>

/**
 * main - function
 * @ac: number of items in av
 * @av: array of strings
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("av[%d] = %s\n", i, av[i]);
		i++;
	}
	return (0);
}

