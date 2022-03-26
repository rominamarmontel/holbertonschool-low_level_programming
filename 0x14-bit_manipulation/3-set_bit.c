#include "main.h"

/**
* set_bit - set bit at index
* @n: param
* @index: param
* Return: 1 or -1 if failed
*/

int set_bit(unsigned long int *n, unsigned int index)
{/*shitei sareta index de bit no atai wo 1 ni settei*/
	if (!n || index > 64)/*n ga null matawa 64byte ijo no baai*/
		return (-1);
	*n = *n | (1 << index);/*0001 wo index bun hidari ni 1 zurashita baai*/
	return (1);
}
