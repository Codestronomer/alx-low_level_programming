#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint
 * linked list
 * @head: head node of linked list
 * @index: index of node to get
 *
 * Return: nth node of linked list, NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head && i < index)
		{
			head = head->next;
			i++;
		}
		return (head);
	}
	return (NULL);
}


