#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value associate with key
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	hash_node_t *new;
	unsigned long int index;
	char *new_value;
	char *new_key;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_value = strdup(value);
	new_key = strdup(key);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t *) * ht->size);
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = new_key;
	new->value = new_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
