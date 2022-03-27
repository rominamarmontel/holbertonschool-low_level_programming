#include "lists.h"
/**
 * free_listint - function for free memory
 * @head: first node
 * Return: rien
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
