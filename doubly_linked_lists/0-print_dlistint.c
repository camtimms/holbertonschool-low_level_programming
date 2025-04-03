#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 *
 * @h: Pointer to the head of a list
 *
 * Description: Prints all the elements of a doubly linked list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
