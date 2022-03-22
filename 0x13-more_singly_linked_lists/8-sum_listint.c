#include "lists.h"
/**
 * sum_listint - sum of all data(n) of list
 * @head: first node
 * Return: i, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL;)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
