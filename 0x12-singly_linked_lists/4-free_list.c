#include "lists.h"

/**
 * free_list - fonction
 * @head: param
 * Return: rien
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
