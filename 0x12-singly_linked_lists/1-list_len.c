#include "lists.h"
/**
 * list_len - fonction
 * @h: head of data
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i;
	size_t number = 0; /*node no kazu*/
	const list_t *node; /*node of list_t*/

	node = h;/*node ga head ni aru*/

	for (i = 0; node; i++)
	{
		if (node->str == NULL)/*if node of string is  NULL*/
			printf("[0] (nil)\n");
		else
			node = node->next;/*next of c wo c ni dainyu*/
		number++;/*node no kazu incriment*/
	}
	return (number);/*node no kazu = number of node elements*/
}
