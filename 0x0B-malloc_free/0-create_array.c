#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function
 * @size: param
 * @c: param
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{/*creates an array of chars, and initializes it with a specific char*/
	unsigned int i;
	char *ar; /* creat an array of char */

	if (size == 0) /* if size = 0, return NULL */
		return (NULL);
	ar = malloc(size * sizeof(char));/* define values with malloc */
	if (ar == NULL) /* if it fails, return NULL */
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)/* create an array of char */
	{
		ar[i] = c;/*initializes it with a specific char c */
	}
	return (ar);/* return a pointer to the array of char */
}
