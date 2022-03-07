#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog name/string
 * @age: dog age/float
 * @owner: dog owner name/string
 * Description: create a new dog
 * Return: NULL if the function fails, pointer to new dog if it works
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i; /*dog name*/
	int j; /*owner name*/
	int len; /*length of a new dog*/
	dog_t *new; /*new dog*/


	for (i = 0; name[i] != '\0'; i++) /*count size of name*/
	{
	}
	for (j = 0; owner[j] != '\0'; j++) /*count size of owner*/
	{
	}

	new = malloc(sizeof(dog_t)); /*allocation for new dog*/
	if (new == NULL || name == NULL || owner == NULL)
		return (0);/*if NULL return NULL*/

	new->name = malloc(i); /*allocation for name of new dog*/
	new->owner = malloc(j); /*allocation for owner of new dog*/

	for (len = 0; name[len] != '\0'; len++)/*count name of new dog*/
	{
		new->name[len] = name[len];/*copy name of new dog*/
	}
	for (len = 0; owner[len] != '\0'; len++)/*count owner of new dog*/
	{
		new->owner[len] = owner[len];/*copy owner of new store*/
	}
	new->age = age;/*copy age of new dog*/
	return (new);
}
