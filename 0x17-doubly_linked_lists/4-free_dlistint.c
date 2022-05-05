#include "lists.h"
/**
 * free_dlistint - free node
 * @head: param
 * Return: Number of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (*head == NULL)
		return;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->n);
		free(head);
		*head = *temp;
	}
}
