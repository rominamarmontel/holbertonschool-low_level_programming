#include "lists.h"
/**
 * print_listint - function for printing all the elements of linked list
 * @h: first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	listint_t *temp = h;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
