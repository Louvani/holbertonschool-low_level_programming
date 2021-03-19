#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list.
 * @head: first pointer to th linked list
 * @str: content for the data
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	new_element->len = _strlen(str);
	new_element->next = *head;
	*head = new_element;

	return (*head);
}
/**
 * _strlen - returns the length of a string
 *@s: variable with the string
 *
 * Return: always l.
 */
int _strlen(const char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
