#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint = retusn the sum of the data of
 * of a listint_t linked list
 * @head: a head node of a listint_t linked list
 *
 * Return: sum of all day, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
