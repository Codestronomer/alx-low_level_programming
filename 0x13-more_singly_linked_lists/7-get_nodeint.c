#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list
 * @head: head node of a listint_t linked list
 * @index: index of node to be returned
 *
 * Return: nth node of a listint_t linked list, NULL
 * if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			node = node->next;
		}
		if (node == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (node);
}
