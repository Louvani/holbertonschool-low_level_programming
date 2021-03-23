#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to head
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = NULL;
	size_t counter = 0; /*counts the number of nodes*/

	current = h;
	while (current != NULL)
	{
		counter += 1;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (counter);
}
