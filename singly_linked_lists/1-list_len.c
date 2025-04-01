#include "lists.h"
#include <stdio.h>

/**
 * list_len - Counts the number of elements of a linked list
 *
 * @h: Head of the linked list
 *
 * Description: Counts the elements of a linked list
 *
 * Return: Length of the nodes in the list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
