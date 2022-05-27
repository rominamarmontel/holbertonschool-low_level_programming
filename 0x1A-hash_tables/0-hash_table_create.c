#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of array
 * Return: new hash table, NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new->array);
		return (NULL);
	}
	return (new);
}