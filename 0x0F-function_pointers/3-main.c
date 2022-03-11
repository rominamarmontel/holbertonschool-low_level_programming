#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the elements
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[])/*calc num1 operator num*/
{
	int num1;
	int num2;

	if (argc != 4)/*if argc is not 4*/
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] == '\0' || get_op_func(argv[2]) == NULL)
/*if operator is none of the list*/
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[3][1] == 0 && argv[2][0] == '/')/*if divide(/ or %) by 0*/
	    || (argv[3][1] == 0 && argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);/*to convert to integer with atoi*/
	num2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
