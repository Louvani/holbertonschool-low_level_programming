#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer of the list head.
 * Return: ponter of head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head) /*until head be null*/
	{
		next = (*head)->next; /*pointes to the second node*/
		(*head)->next = prev; /*first node point to null*/
		prev = *head; /*do not lose the reference*/
		*head = next;/*point to the second*/
	}
	*head = prev;
	return (*head);
}
