#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in  dlistint_t linked list
 * @h: head pointer of a dlistint_t linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}


/**
 * delete_dnodeint_at_index - deletes the node at index of
 * a dlistint_t linked list
 * @head: head node of a dlistint_t linked list
 * @index: index of node to be deleted
 *
 * Return: 1 if successful, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (dlistint_len(temp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
