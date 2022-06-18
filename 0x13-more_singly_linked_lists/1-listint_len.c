#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * listint_len - returnns the number of elements
 * in a linked listint_t list.
 * @h: head item in listint_t list
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}

