#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add new node at the end
 * of a listint_t list
 * @head: head node
 * @n: element of new node
 *
 * Return:: address of the new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}
