#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node
 * @head: first node
 * @idx: index of the list where the new node added
 * @n: param
 * Return: the address of the new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (i = 0; i < idx; i++)
	{
		if (temp->next == NULL)
			return  (NULL);
		temp = temp->next;
	}
	temp2 = temp->next;/*98 no address*/
	new->next = temp2;/*new no next ni 98 no adress wo ireru*/
	temp->next = new;/*4 no next new no adress wo ireru*/

	return (new);
}
