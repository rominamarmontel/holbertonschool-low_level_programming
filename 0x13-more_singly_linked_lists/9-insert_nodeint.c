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
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n; /*new no data ni n wo ireru*/
	if (idx == 0) /*index ga 0 no baai*/
	{
		new->next = *head; /*new->next ni head no nakami wo ireru*/
		*head = new; /*head ni new no adress wo ireru*/
	}
	else
	{
		for (i = 1; i < idx; i++) /*i ga 1kara idx made incriment*/
		{
			if (temp->next == NULL)/*node no tsuika ga damenara*/
				return  (NULL);
			temp = temp->next;/*temp wo susumeru*/
		}
		new->next = temp->next;
		temp->next = new;/*temp->next ni new no adress wo ireru*/
	}
	return (new);
}
