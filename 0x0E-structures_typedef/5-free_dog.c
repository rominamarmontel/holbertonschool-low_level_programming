#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: param
 * Description: function free dog
 * Return: rien
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
