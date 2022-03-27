#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: first node
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *avant = *head;
	listint_t *apres;/*index node no ushiro no node*/
	unsigned int i;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(avant);/*head no kawari ni avant wo free*/
		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)/*index yori 1tsu mae de deru*/
		{
			if (avant == NULL)
				return (-1);
			avant = avant->next;
		}
		apres = avant->next;/*apres no adress ni avant->next wo ireru*/
		avant->next = apres->next;/*avant->next wo apres->next ni kaeru*/
	}
	free(apres);
	return (1);
}
