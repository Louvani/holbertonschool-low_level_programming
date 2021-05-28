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
	hash_node_t *current_list = NULL;

	printf("{");
	while (idx_arr < ht->size)
	{
		current_list = ht->array[idx_arr];
		while (current_list)
		{
			printf("'%s': '%s'", current_list->key, current_list->value);
			if (current_list->next)
				printf(", ");
			current_list = current_list->next;
		}
		idx_arr++;
	}
printf("}\n");
}