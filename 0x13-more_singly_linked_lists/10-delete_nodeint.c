#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: first node
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 1; i < index; i++)
		{
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
		}
		new = temp->next;
		temp->next = new->next;
		free(new);
	}
	return (1);
}
