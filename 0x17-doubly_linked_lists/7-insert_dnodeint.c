#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: param
 * @idx: param
 * @n: param
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
			new->next = temp->next;
			temp->next->prev = new;
		}
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
