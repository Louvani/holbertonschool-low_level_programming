#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *current = NULL;

	if (head)
	{
		current = *head;
		while (current != NULL)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}
		*head = NULL;
	}
}
