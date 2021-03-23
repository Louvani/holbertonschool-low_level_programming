#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current = NULL; /*to be in the current node*/

	if (head) /*If addres is not NULL*/
	{
		while (*head != NULL) /*if node is not null*/
		{
			current = *head;
			*head = current->next;
			free(current);
		}
	}
	*head = NULL; /*set again head to null*/
}
