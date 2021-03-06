#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_listint - prints all elemenets of a
 * listint_t *h
 * @h: head
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}

	return (i);
}

