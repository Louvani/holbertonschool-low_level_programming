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
	hash_node_t *new_element = NULL, *aux_node = NULL;
	unsigned long int index;

	if (strlen(key) == 0 || !ht)
		return (0);
	/*Get the index of key in the array*/
	index = key_index((unsigned char *)key, ht->size);
	/*If key alrredy exist update the value and return*/
	aux_node = ht->array[index];
	while (aux_node)
	{
		if (strcmp(aux_node->key, key) == 0)
		{
			aux_node->value = strdup(value);
			return (1);
		}
		aux_node = aux_node->next;
	}
	/*create the new node*/
	new_element = create_node(key, value);
	if (!new_element)
		return (0);
	/*inset node in the list*/
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}

/**
 * create_node - create the node
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated
 * value can be an empty string.
 * Return: the new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_element;

	/*create the new node*/
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (NULL);

	/*Set values for the new node*/
	new_element->next = NULL;
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	if (!new_element->key)
	{
		free(new_element);
		return (NULL);
	}
	return (new_element);
}
