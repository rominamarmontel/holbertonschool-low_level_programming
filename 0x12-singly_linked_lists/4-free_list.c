#include "lists.h"

/**
 * free_list - fonction
 * @head: param
 * Return: rien
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
