#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to head
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0; /*counts the number of nodes*/
	 /*Copy of the header to not lose start point*/
	const listint_t *current = NULL;

	current = h;
	while (current != NULL)
	{
		counter += 1;
		current = current->next;
	}
	return (counter);
}
