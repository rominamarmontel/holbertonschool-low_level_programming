#include "main.h"
/**
 * binary_to_uint - function
 * @b: string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	unsigned int sum = 0;
	unsigned int mul = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	i = i - 1;
	for (j = i; j >= 0; j--)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		if (j != i)
			mul *= 2;
		if (b[j] == '1')
			sum += mul;
		else
			sum += 0;
	}
	return (sum);
}
