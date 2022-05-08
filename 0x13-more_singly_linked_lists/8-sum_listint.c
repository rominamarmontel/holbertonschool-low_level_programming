#include "lists.h"
/**
 * sum_listint - sum of all data(n) of list
 * @head: first node
 * Return: i, 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int i;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (i = 0; temp->next != NULL; i++)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
