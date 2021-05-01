#include "lists.h"
/**
 * dlistint_len - eturns the number of elements in a linked dlistint_t list.
 * @h: pointer of the header of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *current = h;

	while (current)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
