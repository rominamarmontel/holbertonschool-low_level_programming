#include "lists.h"

/**
 * pop_listint - delete the node
 * @head: first node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	else
		i = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	return (i);
}
