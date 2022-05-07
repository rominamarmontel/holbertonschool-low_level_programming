#include "lists.h"
/**
 * free_listint2 - function sets the head to NULL
 * @head: first node
 * Return: rien
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
