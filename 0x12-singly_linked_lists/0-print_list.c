#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to head
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = NULL;
	size_t counter = 0; /*counts the number of nodes*/

	current = h;
	while (current != NULL)
	{
		counter += 1;
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}
	return (counter);
}
