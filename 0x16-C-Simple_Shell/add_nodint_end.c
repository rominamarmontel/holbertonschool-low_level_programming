#include "main.h"
/**
 * *add_nodeint_end - function for adding new node
 * @head: first node
 * @n: the number of elements
 * Return: the address of the new element, or NULL if it failed
 */

listpath_t *add_node_end(listpath_t **head, char *str)
{
	listpath_t *new;
	listpath_t *temp = *head;

	new = malloc(sizeof(listpath_t));
	if (new == NULL)
		return (NULL);
	new->str = str;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}
		temp->next = new;
		temp = new;
	}
	return (new);
}
