#include "lists.h"

/**
 * dlistint_len - returns the number elements of a dlistint_t list
 * @h: head node of dlistint_t linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
