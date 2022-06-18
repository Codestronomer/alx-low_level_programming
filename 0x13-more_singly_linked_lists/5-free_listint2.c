#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t list head
 *
 * Return: always nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	curr = *head;
	while ((temp = curr) != NULL)
	{
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
