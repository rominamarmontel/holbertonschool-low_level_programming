#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -concatenates two strings
 * @s1: param
 * @s2: param
 * Return: str_concat
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int j = 0;
	int size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	size = i + j + i;

	s3 = malloc(sizeof(char) * size);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		s3[i + j] = s2[j];

	return (s3);
}
