#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head
 * Return: sum of the data, if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = NULL;

	if (head == NULL)
		return (0);

	current = head;
	sum = current->n;

	while (current->next != NULL)
	{
		current = current->next;
		sum += current->n;
	}
	return (sum);
}
