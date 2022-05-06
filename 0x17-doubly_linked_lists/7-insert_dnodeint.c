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
	dlistint_t *new, *nx_idx;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (idx > 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}
		nx_idx = temp->next;
		temp->next = new;
		new->prev = temp;
		new->next = nx_idx;
		nx_idx->prev = new;
		return (new);
	}
	return (0);
}
