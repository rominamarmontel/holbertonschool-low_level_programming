#include "lists.h"
/**
 * add_node - add a new node
 * @head: head of data
 * @str: string
 * Return: adress of the new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	for (i = 0; str[i] != '\0'; i++) /*count string before adding*/
	{
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = *head;/*new->next ni head no nakami wo ireru*/
	*head = new;/*head no nakami ni new no adress wo ireru*/
	return (new);
}
