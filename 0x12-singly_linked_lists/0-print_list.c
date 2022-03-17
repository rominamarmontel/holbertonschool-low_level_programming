#include "lists.h"
/**
 * print_list - fonction
 * @h: head of data
 * Return: count the number
 */

size_t print_list(const list_t *h) /*print all the elements of a list_t list*/
{
	int i;
	size_t number = 0; /*node no kazu*/
	const list_t *node; /*node of list_t*/

	node = h; /*node ga head ni aru*/

	for (i = 0; node; i++)
	{
		if (node->str == NULL)/*if node of string is  NULL*/
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node->len, node->str);
		node = node->next;/*tsugi no node wo sasu*/
		number++;/*node no kazu incriment*/
	}
	return (number);/*node no kazu = number of node elements*/
}
