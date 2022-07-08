#include "lists.h"

/**
 * insert_dnodeint_at_index - insers a new node at a
 * given position
 * @h: head node of a dlistint_t linked list
 * @idx: index to add new element
 * @n: element to be added to new node
 *
 * Return: address of new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	unsigned int i;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	for (i = 0; *h && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if ((*h)->next == NULL)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			if (new != NULL)
			{
				new->n = n;
				new->next = (*h)->next;
				new->prev = *h;
				(*h)->next->prev = new;
				(*h)->next = new;
				return (new);
			}
		}
		else
			*h = (*h)->next;
	}
	return (NULL);
}
