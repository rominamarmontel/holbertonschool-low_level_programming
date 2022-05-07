#include "lists.h"
/**
 * *add_nodeint - function for adding a new add
 * @head: head node
 * @n: number of element
 * Return: the address of the new element/NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
