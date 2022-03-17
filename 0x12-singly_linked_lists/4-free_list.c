#include "lists.h"

/**
 * free_list - fonction
 * @head: param
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}
