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
	list_t *new;
	list_t *temp;

	for (i = 0; str[i] != '\0'; i++) /*count string*/
	{
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i; /*count shita string wo new ni dainyu*/
	new->next = NULL; /*saigo ni tsuika surukara next wa null*/
	if (*head == NULL)
	{
		*head = new; /*head no nakami ni new wo ireru*/
		return (*head);
	}
	else /*if head != NULL*/
	{
		temp = *head; /*temp wo head kara hajimeru*/
		while (temp->next != NULL)/*list no saigomade temp wo susumeru*/
		{
			temp = temp->next;
		}
	} /*loop kara nukeruto null no temae*/
	temp->next = new; /*new no mae no node ni new no adress wo ireru*/
	return (new);
}
