#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (temp = ht->array[index]; temp != NULL; temp = temp->next)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (index < ht->size - 1 || temp->next != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
