#include "lists.h"
/**
 * print_list - fonction
 * @h: head of data
 * Return: total number of node
 */

size_t print_list(const list_t *h) /*print all the elements of a list_t list*/
{
	size_t n; /*node no kazu*/

	for (n = 0; h != NULL; n++) /*h = head of node */
	{
		if (h->str == NULL)/*if string of head is NULL = aucun linked list*/
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);/*length of head, string of head*/
		h = h->next;/*pointer of head wo head ni dainyu*/
	}
	return (n);/*node no kazu = total number of node elements*/
}
