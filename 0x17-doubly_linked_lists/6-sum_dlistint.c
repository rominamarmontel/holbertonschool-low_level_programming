#include "lists.h"
/**
 * sum_dlistint - the sum of all the data
 * @head: param
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
