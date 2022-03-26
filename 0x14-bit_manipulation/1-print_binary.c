#include "main.h"
/**
 * print_binary -  prints the binary
 * @n: param
 * Return: rien
 */

void print_binary(unsigned long int n)
{
	if (n > 1)/*decimal ga 2 ijo no baai, soreika wa sonomama no kazu*/
		print_binary (n >> 1); /*migi ni 1 zutsu zurasu*/
	_putchar((n & 1) + '0');/*saigo kara hyoji*/
}
