#include "lists.h"
/**
 * list_len - fonction
 * @h: head of data
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number; /*node no kazu*/

	for (number = 0; h != NULL; number++)
	{
		h = h->next;/*next of head wo head ni dainyu*/
	}
	return (number);/*node no kazu = number of node elements*/
}
