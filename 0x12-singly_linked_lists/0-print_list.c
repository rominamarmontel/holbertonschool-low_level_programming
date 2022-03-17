#include "lists.h"
/**
 * print_list - fonction
 * @h: head of data
 * Return: total number of node
 */

size_t print_list(const list_t *h) /*print all the elements of a list_t list*/
{
	size_t number; /*node no kazu*/

	for (number = 0; h != NULL; number++)
	{
		if (h->str == NULL)/*if node of string is  NULL*/
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;/*tsugi no node wo sasu*/
	}
	return (number);/*node no kazu = total number of node elements*/
}
