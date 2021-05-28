#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * print the key/value in the order that they appear in the array
 * of hash table.
 * Order: array, list
 * If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx_arr = 0;
	int itetarion = 0;
	hash_node_t *current_list = NULL;

	if (ht)
	{
		printf("{");
		while (idx_arr < ht->size)
		{
			current_list = ht->array[idx_arr];
			while (current_list)
			{
				if (itetarion != 0)
					printf(", ");
				printf("'%s': '%s'", current_list->key, current_list->value);
				current_list = current_list->next;
				itetarion++;
			}
			idx_arr++;
		}
		printf("}\n");
	}
}
