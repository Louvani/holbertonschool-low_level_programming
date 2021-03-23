#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to addres of the head.
 * @n: number tu add in the new node.
 * Return: Pointer of head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = NULL;
	listint_t *new_element = NULL;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (*head);
	}
	else
		current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new_element;

	return (*head);
}
