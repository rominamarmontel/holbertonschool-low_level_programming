#include "main.h"
/**
 * print_binary -  prints the binary
 * @n: param
 * Return: rien
 */

void print_binary(unsigned long int n)
{
	if (n > 1)/*if more digits get*/
		print_binary(n >> 1);/*recursion and shift next*/
	_putchar((n & 1) + '0');/*print first case*/
}
