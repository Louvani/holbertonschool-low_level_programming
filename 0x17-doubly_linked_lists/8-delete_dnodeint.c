#include "lists.h"

size_t num_nodes(const dlistint_t *h);
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer of the head of a linked list
 * @index: position to delet
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = *head; /*point to node to delete*/
	unsigned int num_of_nodes = num_nodes(*head), counter = 0;

	if (*head == NULL)
		return (-1);
	if (num_of_nodes == 1 && index == 0)
	{
		*head = NULL;
		free(del_node);
		return (1);
	}
	if (index <= num_of_nodes)
	{
		if (index == 0)
		{
			if (del_node && (*head)->next != NULL)
			{
				*head = (*head)->next;
				(*head)->prev = NULL;
				free(del_node);
				return (1);
			}
		}
		while (counter < index && del_node != NULL)
		{ /*Move to the required node*/
			del_node = del_node->next;
			counter++;
		}
		if (del_node && del_node->next != NULL)
		{
			if (del_node == *head)
				*head = (*head)->next;
			del_node->prev->next = del_node->next;
			del_node->next->prev = del_node->prev;
			del_node->next = NULL;
			del_node->prev = NULL;
			free(del_node);
			return (1);
		}
		else
		{
			del_node->prev->next = NULL;
			free(del_node);
			return (1);
		}
	}
	return (-1);
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
