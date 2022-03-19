#include "lists.h"
/**
 * list_len - fonction
 * @h: head of data
 * Return: the number of elements
 */
size_t list_len(const list_t *h)/*returns the number of elements in a list_t*/
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
