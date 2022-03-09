#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the elements
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0' || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
