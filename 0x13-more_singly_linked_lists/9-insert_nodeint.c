#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to list head
 * @idx: index to insert new node
 * @n: data to add at the new node
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_element, *current;
	unsigned int counter = 1;

	new_element = NULL;
	current = (*head);

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	if (*head == NULL || idx == 0)
	{
		*head = new_element;
		if (idx == 0)
		{
			new_element->next = current->next;
			current->next = new_element;
		}
		return (new_element);
	}
	while (counter < idx && current->next != NULL)
	{
		current = current->next;
		counter++;
	}
	new_element->next = current->next;
	current->next = new_element;
	return (new_element);
}
