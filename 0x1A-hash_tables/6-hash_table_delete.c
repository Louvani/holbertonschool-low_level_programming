#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx_arr = 0;
	hash_node_t *current_list = NULL;

	if (ht)
	{
		while (idx_arr <= ht->size)
		{
			while (ht->array[idx_arr])
			{
				current_list = ht->array[idx_arr]->next;
				free(ht->array[idx_arr]->key);
				free(ht->array[idx_arr]->value);
				free(ht->array[idx_arr]);
				ht->array[idx_arr] = current_list;
			}
			free(ht->array[idx_arr]);
			idx_arr++;
		}
		free(ht->array);
		free(ht);
	}
}
