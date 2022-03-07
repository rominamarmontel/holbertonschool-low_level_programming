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
	dog_t *new; /*new dog*/

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}

	new->name = malloc((i + 1) * sizeof(char));
	new->owner = malloc((j + 1) * sizeof(char));

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		new->name[i] = name[i];
	}
	new->name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
	{
		new->owner[j] = owner[j];
	}
	new->owner[j] = '\0';
	new->age = age;
	return (new);
}
