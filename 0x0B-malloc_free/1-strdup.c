#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)/*count number of string */
	{
	}
	duplicate = malloc((size + 1) * sizeof(char));/* calcul size of byte */

	if (duplicate == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
