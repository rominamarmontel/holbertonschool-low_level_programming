#include "lists.h"
/**
 * sum_listint - sum of all data(n) of list
 * @head: first node
 * Return: i, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
