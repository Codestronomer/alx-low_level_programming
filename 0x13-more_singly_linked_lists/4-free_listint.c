#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: listint_t list head
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tempw;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(head->n);
		free(temp);
	}
}

