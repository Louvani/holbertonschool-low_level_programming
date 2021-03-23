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
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointr of list head.
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int num_of_nodes = listint_len(head);
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	if (index <= num_of_nodes)
	{
		while (counter < index && temp->next != NULL)
		{
			temp = temp->next;
			counter++;
		}
		return (temp);
	}
	else
		return (NULL);

}
