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

	if (head == NULL)
		return (0);
	for (i = 0; temp != NULL;)
	{
		i += temp->n;/*temp no deata wo i kai tasu*/
		temp = temp->next;/*temp wo susumeru*/
	}
	return (i);
}
