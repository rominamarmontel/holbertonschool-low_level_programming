#include "lists.h"
/**
 * free_listint - function for free memory
 * @head: first node
 * Return: rien
 */
void free_listint(listint_t *head)
{
	listint_t *newfree;

	while (head)
	{
		newfree = head->next;
		free(head);
		head = newfree;
	}
}
