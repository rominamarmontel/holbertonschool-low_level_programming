#include "lists.h"
/**
 * sum_listint - sum of all data(n) of list
 * @head: first node
 * Return: i, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int i;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	for (i = 0; tmp != NULL;)
	{
		i += tmp->n;/*tmp no data n wo tasu*/
		temp = tmp->next;/*temp wo susumeru*/
	}
	return (i);
}
