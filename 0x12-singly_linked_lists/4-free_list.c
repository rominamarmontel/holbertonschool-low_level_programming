#include "lists.h"

/**
 * free_list - fonction
 * @head: param
 */

void free_list(list_t *head)
{
	list_t *f;

	if (head != NULL)
	{
		f = head;
		head = head->next;
		free(head->str);
		free(head);
	}
	free(head);
}
