#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *new;
	unsigned long int i;
	
	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				new = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = new;
			}
		}
	}
	free(ht->array);
	free(ht);
}
