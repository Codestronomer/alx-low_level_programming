#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked  list, safely
 * @head: head node of a listint_t linked list
 *
 * Return: number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		nnodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

	}
	return (nnodes);
}
