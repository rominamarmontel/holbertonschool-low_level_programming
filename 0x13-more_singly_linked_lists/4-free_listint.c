#include "lists.h"
/**
 * free_listint - function for free memory
 * @head: first node
 * Return: rien
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head != NULL)
	{
		head = head->next;
		free(temp);
		head = temp;
	}
}
