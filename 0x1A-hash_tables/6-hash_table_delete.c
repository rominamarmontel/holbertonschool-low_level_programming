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

	if (ht == NULL)
		return;
	else
	{
		for (index = 0; index < ht->size; index++)
		{
			temp = ht->array[index];
			while (temp)
			{
				del = temp;
				free(del->key);
				free(del->value);
				free(del);
				temp = temp->next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
