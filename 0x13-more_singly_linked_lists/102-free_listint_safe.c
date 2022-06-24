#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: head node of a listint_t linked list
 *
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i, diff;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	for (i = 0; *h; i++)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
		i++;
	}

	*h = NULL;

	return (len);
}
