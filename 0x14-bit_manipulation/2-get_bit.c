#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: param
 * @n: param
 * Return: index, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{ /*n no binary wo index bun migi ni zurasubaai saigoni hyoji sareru moji*/
	if (index > 64)/*index wa 64bytes ika dakara*/
		return (-1);
	return ((n >> index) & 1);/*cn & 1 = saigo kara hyoji*/
}
