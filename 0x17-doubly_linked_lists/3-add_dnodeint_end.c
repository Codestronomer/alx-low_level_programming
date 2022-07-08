#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a
 * dlistint_t linked list
 * @head: head node of a dlistint_t linked list
 * @n: element of the new node
 *
 * Return: Address of new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = new;
		new->prev = *head;
	}
	else
	{
		new->prev = NULL;
	}
	return (new);
}
