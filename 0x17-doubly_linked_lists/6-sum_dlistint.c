#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t
 * linked list
 * @head: head node of dlistint_t linked list
 *
 * Return: sum of all data(n), 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
