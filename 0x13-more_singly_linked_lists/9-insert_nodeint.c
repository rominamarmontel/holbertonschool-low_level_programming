#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node
 * @head: first node
 * @idx: index of the list where the new node added
 * @n: param
 * Return: the address of the new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		next->next = *head;
		*head = new;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	new = temp;
	return (new);
}
