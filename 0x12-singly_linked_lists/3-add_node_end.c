#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a ist.
 * @head: first pointer to th linked list
 * @str: content for the data
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = NULL; /*points to to the last node created*/
	list_t *new_element = NULL; /*keeps the new node*/

	new_element = malloc(sizeof(list_t)); /*Create new node*/
	if (new_element == NULL)/*verify memory*/
		return (NULL);
	new_element->str = strdup(str); /*update data*/
	new_element->len = _strlen(str);/*lenght of string*/
	new_element->next = NULL; /*now is the last node*/

	if (*head == NULL) /*if head comes whit out nodes point to the new node*/
	{
		*head = new_element;
		return (*head);
	}
	else
		current = *head; /*Current point to head to traverse to the last node*/
	while (current->next != NULL)
	{
		current = current->next;
	}
	/*point to the last element*/
	current->next = new_element;

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
