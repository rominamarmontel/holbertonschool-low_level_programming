#include "lists.h"
/**
 * add_node - add a new node
 * @head: head of data
 * @str: string
 * Return: adress of the new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newnode; /*new node*/

	for (i = 0; str[i] != '\0'; i++) /*count string*/
	{
	}
	newnode = malloc(sizeof(list_t)); /*malloc for copy dest*/
	if (newnode == NULL)
		return (0);
	newnode->str = strdup(str); /*copy string to newnode string*/
	newnode->len = i; /*copy length string to newnode string*/
	newnode->next = *head; /*copy adress of string to head*/
	*head = newnode; /*head ni newnode wo dainyu*/
	return (newnode);
}
