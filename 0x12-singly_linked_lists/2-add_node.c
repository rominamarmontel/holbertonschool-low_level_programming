#include "lists.h"
/**
 * add_node - add a new node
 * @head: head of data
 * @str: string
 * Return: adress of the new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{/*adds a new node at the beginning of a list_t*/
	unsigned int i;
	list_t *temp; /*new node*/

	for (i = 0; str[i] != '\0'; i++) /*count string before adding*/
	{
	}
	temp = malloc(sizeof(list_t)); /*malloc for copy dest*/
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);/*temp ni string of node wo dainyu*/
	temp->len = i;/*temp ni length of node wo dainyu*/
	temp->next = *head;/*temp ni adress of head wo dainyu*/
	*head = temp;/*head ni temp wo dainyu*/
	return (temp);
}
