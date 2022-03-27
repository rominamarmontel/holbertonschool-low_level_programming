#include "lists.h"
/**
 * *add_nodeint_end - function for adding new node
 * @head: first node
 * @n: the number of elements
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}
		temp->next = new;
		temp = new;
	}
	return (new);
}
