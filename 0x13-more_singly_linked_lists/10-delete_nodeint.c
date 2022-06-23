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
	listint_t *temp;
	listint_t *next;

	temp = *head;
	if (index != 0)
	{
		if (temp != NULL)
		{
			for (i = 0; temp != NULL && i < index; i++)
			{
				temp = temp->next;
			}
		}
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}

	next = temp->next;

	if (index != 0)
	{
		temp->next = next->next;
		free(next);
	}
	else
	{
		free(temp);
		*head = next;
	}

	return (1);
}
