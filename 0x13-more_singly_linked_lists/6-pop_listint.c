#include "lists.h"

/**
 * pop_listint - delete the node
 * @head: first node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *newfree;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	newfree = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(newfree);
	return (i);
}
