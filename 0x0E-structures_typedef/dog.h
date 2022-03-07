#ifndef _DOG_H
#define _DOG_H

/**
 * dog_type - Typedef for struct dog
 */
typedef struct dog dog_type;

/**
 * struct dog - a new type
 * @name: dog name/string
 * @age: dog age/float
 * @owner: owner name/string
 * Description: define a new type that contains name, age and owner
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
