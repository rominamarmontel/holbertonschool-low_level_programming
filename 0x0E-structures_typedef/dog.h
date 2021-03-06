#ifndef _DOG_H
#define _DOG_H

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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
