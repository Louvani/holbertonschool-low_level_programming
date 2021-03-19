#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: pointer to head
 * Return: The number of elements (Nodes)
 */

size_t list_len(const list_t *h)
{
	const list_t *current = NULL;
	size_t counter = 0; /*counts the number of nodes*/

	current = h;
	while (current != NULL)
	{
		counter += 1;
		current = current->next;
	}
	return (counter);
}
