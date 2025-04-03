#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Sum of the data in a doubly linked list
 *
 * @head: Pointer to first node of the list
 *
 * Description: Iterates through the doubly linked list and sums the integers
 *
 * Return: Sum of values (int) or empty list (0)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
