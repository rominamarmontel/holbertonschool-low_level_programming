#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		while (ht->array[index] != NULL)
		{
			temp = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = temp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
