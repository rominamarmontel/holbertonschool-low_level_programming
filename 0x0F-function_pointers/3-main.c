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
	char *op;

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	(void)*argv;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*op != '+' || *op != '-' || *op != '*' || *op != '/' || *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (*op == '/' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (*op == '%' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
