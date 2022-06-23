#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * a listint_t linked list
 * @head: head node of a listint_t linked list
 * @index: node index
 *
 * Return: 1 if successful, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	temp = *head;
	if (temp != NULL)
	{
		for (i = 0; temp != NULL && i < index; i++)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		free(temp);
	}
	else
	{
		free(temp);
		return (-1);
	}
	return (1);
}
