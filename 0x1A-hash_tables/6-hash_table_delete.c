#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *del;
	unsigned long int index;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			temp = ht->array[index];
			while (temp)
			{
				del = temp;
				temp = temp->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
		free(ht->array);
		free(ht);
	}
}
