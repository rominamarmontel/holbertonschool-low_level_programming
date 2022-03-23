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
	listint_t *del;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (temp == NULL)
				return (-1);
			temp = temp->next;
		}
		del = temp->next;
		temp->next = del->next;
	}
	free(del);
	return (1);
}
