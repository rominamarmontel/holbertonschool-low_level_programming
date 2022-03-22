#include "lists.h"
/**
 * *get_nodeint_at_index - return the nth node
 * @head: first node
 * @index: param
 * Return: nth
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nth = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (nth == NULL)
			return (NULL);
		nth = nth->next;
	}
	return (nth);
}
