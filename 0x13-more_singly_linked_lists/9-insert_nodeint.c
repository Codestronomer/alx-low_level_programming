#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 * @head: head node of a listint_t linked list
 * @idx: index of the list to add new node
 * @n: value of new node
 *
 * Return: Address of the new node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	temp = *head;

	for (i = 0; i < idx && *temp != NULL; i++)
	{
		*temp = temp->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	if (new_node == NULL)
		return (NULL)

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		head = new_node;
	}
	else
	{
		new_node->next = h->next;
		temp->next = new_node;
	}


	return (new_node);
}
