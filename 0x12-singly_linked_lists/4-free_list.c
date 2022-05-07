#include "lists.h"

/**
 * free_list - fonction
 * @head: param
 */

void free_list(list_t *head)
{
	list_t *temp = head;/*temp wo sento ni ichi*/

	while (head != NULL)/*NULL ni tassurumade loop*/
	{
		temp = head->next;/*head->next noichi wo copy shite temp ni hozon*/
		free(head->str);
		free(head);
		head = temp;/*sento ni p no yoso wo copy*/
	}
	free(temp);
}
