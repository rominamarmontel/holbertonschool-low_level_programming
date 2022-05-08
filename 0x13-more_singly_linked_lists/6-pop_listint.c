#include "lists.h"

/**
 * pop_listint - delete the node
 * @head: first node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;/*temp wo head ni awaseru*/
	i = (*head)->n;/*i ni head no  wo ireru*/
	temp = (*head)->next;/*temp ni head no adress wo ireru*/
	free(*head);/*head wo sakujo*/
	*head = temp;/*temp wo head ni ireru*/
	return (i);
}
