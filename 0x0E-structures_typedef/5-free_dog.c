#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d; param
 * Description: function free dog
 * Return: rien
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
