#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a
 * listint_t linked list
 * @head: head node of a listint_t linked list
 *
 * Return: the head node data, 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	int i;

	if (curr != NULL)
	{
		*head = curr->next;
		i = curr->n;
		free(curr);
	}
	else
	{
		return (0);
	}

	return (i);
}
