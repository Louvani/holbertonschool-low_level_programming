#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer of the new hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int idx = 0;

	/*Allocate memory for the table*/
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	/*Allocate Memory for the array*/
	table->array = malloc(sizeof(hash_node_t) * size);
	if (!table)
		return (NULL);
	/*Initialize all the array in NULL*/
	while (idx <= size)
	{
		table->array[idx] = NULL;
		idx++;
	}
	return (table);
}
