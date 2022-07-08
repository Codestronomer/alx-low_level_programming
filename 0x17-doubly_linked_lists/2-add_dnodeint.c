#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head node of a dlistint_t list
 * @n: element of new node
 *
 * Return: Address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	while ((*head)->prev != NULL)
		*head =  (*head)->prev;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		(*head)->prev = new;
	}
	new->next = *head;
	*head = new;

	return (*head);
}
