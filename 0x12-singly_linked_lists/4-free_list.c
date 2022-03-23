#include "lists.h"

/**
 * free_list - fonction
 * @head: param
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;/*temp no adress ni head->next wo ireru*/
		free(head);
		head = temp;
	}
}
