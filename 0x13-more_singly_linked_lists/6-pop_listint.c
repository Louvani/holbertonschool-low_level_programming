#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: Addres of the pointer to the header.
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *current = NULL; /*points to to the last node created*/
	int value;

	current = *head;
	value = current->n;
	if (!current->n)
		value = 0;
	current = current->next;
	free(*head);
	*head = current;

	return (value);
}
