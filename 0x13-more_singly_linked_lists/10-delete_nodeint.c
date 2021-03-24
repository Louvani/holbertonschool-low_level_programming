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
 * delete_nodeint_at_index - deletes the node at index x of alinked list.
 * @head:pointer to the head of a linked list
 * @index:number of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node = *head; /*point to node to delete*/
	listint_t *current = *head; /*point to current node*/
	/*num_of_nodes - To check if inddex is not more than the number of nodes*/
	unsigned int num_of_nodes = listint_len(*head);
	unsigned int counter = 0;

	if (*head == NULL) /*If is a empty list cant make deletions*/
		return (-1);

	else if (index <= num_of_nodes)
	{
		while (counter < index && del_node != NULL)
		{ /*Move to the required node*/
			current = del_node;
			del_node = del_node->next;
			counter++;
		}
		if (del_node)
		{
			if (del_node == *head)
				*head = (*head)->next;
			current->next = del_node->next;
			del_node->next = NULL;
			free(del_node);
			return (1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}