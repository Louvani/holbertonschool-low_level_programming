#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the head of a list
 * Return: sum of the data, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int result = 0;

	if (!head)
		return (0);
	while (current)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}
