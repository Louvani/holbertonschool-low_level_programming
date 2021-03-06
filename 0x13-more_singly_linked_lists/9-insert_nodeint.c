#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: pointer to head
 * Return: The number of elements (Nodes)
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = NULL;
	size_t counter = 0; /*counts the number of nodes*/

	current = h;
	while (current != NULL)
	{
		counter += 1;
		current = current->next;
	}
	return (counter);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to list head
 * @idx: index to insert new node
 * @n: data to add at the new node
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_element, *current = *head;
	unsigned int num_of_nodes = listint_len(*head);
	unsigned int counter = 0;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	/*new_element->next = NULL;rrevisar*/

	if (idx == 0)
	{
		new_element->next = current;
		*head = new_element;

		return (*head);
	}

	if (idx <= num_of_nodes)
	{
		while (counter < idx - 1 && current->next != NULL)
		{
			current = current->next;
			counter++;
		}
		new_element->next = current->next;
		current->next = new_element;
		return (current->next);
	}
	else
	{
		free(new_element);
		return (NULL);
	}
}
