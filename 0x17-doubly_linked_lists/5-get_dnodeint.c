#include "lists.h"
/**
 * *get_dnodeint_at_index - free node
 * @head: param
 * Return: Number of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}	
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
}