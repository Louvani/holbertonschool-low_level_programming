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
	hash_node_t *aux_node; /*to check if a key alrready exist*/
	unsigned long int index;

	if (key == NULL || strlen(key) == 0 || !ht || !value)
		return (0);
	/*Get the index of in the aarray*/
	index = key_index((unsigned char *)key, ht->size);
	/*If key alrredy exist update the value and return*/
	aux_node = ht->array[index];
	while (aux_node)
	{
		if (strcmp(aux_node->key, key) == 0)
		{
			free(aux_node->value);
			aux_node->value = strdup(value);
			return (1);
		}
		aux_node = aux_node->next;
	}
	/*create the new node*/
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	/*Set values for the new node*/
	new_element->next = NULL;
	new_element->key = (char *)key;
	new_element->value = strdup(value);
	if (!new_element->key)
	{
		free(new_element);
		return (0);
	}
	/*inset node in the list*/
	if (ht->array[index])
		new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}