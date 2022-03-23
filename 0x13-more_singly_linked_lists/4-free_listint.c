#include "lists.h"
/**
 * free_listint - function for free memory
 * @head: first node
 * Return: rien
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;/*temp wo head kara susumeru */
		free(head);/*hitotsu no head value wo free*/
		head = temp;/*head ni temp wo irete tsugini susumu*/
	}
}
