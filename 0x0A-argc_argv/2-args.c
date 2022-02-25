#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: param
 * @argv: param
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)*argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
