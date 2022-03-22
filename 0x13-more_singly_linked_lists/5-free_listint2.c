#include "lists.h"

/**
 * free_listint2 - function sets the head to NULL
 * @head: first node
 * Return: rien
 */

void free_listint2(listint_t **head)
{
	listint_t *newfree;

	if (*head == NULL)
		return;

	while (*head)
	{
		newfree = (*head)->next;
		free(*head);
		*head = newfree;
	}
	head = NULL;
}
