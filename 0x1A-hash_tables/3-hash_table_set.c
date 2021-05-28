#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: is the hash table to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated
 * value can be an empty string.
 * In case of collision, the new node will be at the beginning of the list
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	unsigned long int index;

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	new_element->key = (char *)key;
	new_element->value = (char *)value;
	new_element->next = NULL;
	if (ht->array[index])
		new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
