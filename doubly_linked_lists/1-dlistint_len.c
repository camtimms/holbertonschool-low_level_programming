#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - Returns number of elements of a doubly linked list
 *
 * @h: Pointer to the head of a list
 *
 * Description: Returns the number of elements of a doubly linked list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
