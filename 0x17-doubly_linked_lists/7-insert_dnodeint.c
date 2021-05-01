#include "lists.h"

size_t num_nodes(const dlistint_t *h);
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to the header of a file
 * @idx: index of the list where the new node should be added. Indx starts at 0
 * @n: data to add in the new node
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int num_of_nodes = num_nodes(*h);
	unsigned int counter = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx < num_of_nodes)
	{
		while (counter < idx - 1 && current->next != NULL)
		{
			current = current->next;
			counter++;
		}
		new_node->next = current->next;
		new_node->prev = current;
		current->next->prev = new_node;
		current->next = new_node;
		return (current->next);
	}
	else if (idx == num_of_nodes)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}

/**
 * num_nodes - function that prints all the elements of a dlistint_t list.
 * @h: pointer of the header of the list
 * Return: the number of nodes
 */
size_t num_nodes(const dlistint_t *h)
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
