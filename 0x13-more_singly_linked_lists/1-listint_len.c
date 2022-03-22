#include "lists.h"
/**
 * listint_len - function for returning the number of elements
 * @h: pointer to the head node
 * Return: the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
