#include "lists.h"
/**
 * add_node_end - add a new node to the end of list
 * @head: head of data
 * @str: string
 * Return: adress of the new element, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newnode; /*new node*/
	list_t *lastnode;

	for (i = 0; str[i] != '\0'; i++) /*count string*/
	{
	}
	newnode = malloc(sizeof(list_t)); /*malloc for copy dest*/
	if (newnode == NULL)
	{
		free(newnode);/*nakutemoii*/
		return (NULL);
	}
	newnode->str = strdup(str); /*copy string to newnode string*/
	newnode->len = i; /*copy length string to newnode string*/
	newnode->next = NULL; /*newnode no adress wa null*/

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);/*nakutemoii*/
	}
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
	}
	lastnode->next = newnode;
	return (newnode);
}
