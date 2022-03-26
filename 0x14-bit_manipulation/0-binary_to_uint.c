#include "main.h"
/**
 * binary_to_uint - function
 * @b: string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;
	unsigned int mul = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)/*count string b*/
		;
	i = i - 1;/*saigo no moji*/
	for (; i >= 0; i--)/*string b wo gyaku kara hyoji*/
	{
		if (b[i] != '1' && b[i] != '0')/*string b ga 1 demo 0 demonai*/
			return (0);
		if (b[i] == '1')/*string b ga 1 notoki*/
			mul *= 2;/*mul wa 2 wo kakeru*/
			sum = sum + mul;/*mul wo tasu*/
	}
	return (sum);
}
