#include "hash_tables.h"

/**
 * hash_table_t - function that creates a hash table.
 * @size: size of the array
 * Return: pointer of the new hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	while (i <= size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
