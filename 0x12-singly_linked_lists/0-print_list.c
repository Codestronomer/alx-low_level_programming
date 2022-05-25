#include "lists.h"

/**
 * print_list - prints all elemets of a list_t list
 * @h: first node in the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		h = h->next;
		i++;
	}

	return (i);
}
