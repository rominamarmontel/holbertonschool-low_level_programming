#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - initialize a variable of type struct dog
 * @d: param
 * @name: dog name/string
 * @age: dog age/float
 * @owner: owner name/string
 * Description: initialize a variable of type struct dog
 * Return: rien
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;/*refers to the name of dog*/
		d->age = age;/*refers to the age of dog*/
		d->owner = owner;/*refers to the owner of dog*/
	}
}
