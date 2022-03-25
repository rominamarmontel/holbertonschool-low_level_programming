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
	for (i = 0; b[i] != '\0'; i++)
		;
	i = i - 1;
	for (; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			sum = sum + mul;
		mul *= 2;
	}
	return (sum);
}
