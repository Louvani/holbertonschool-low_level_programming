#include "lists.h"
/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: pointer of the header of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
