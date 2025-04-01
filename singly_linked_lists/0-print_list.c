#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements of a linked list
 *
 * @h: Head of the linked list
 *
 * Description: Prints the elements of a linked list
 *
 * Return: Length of the nodes in the list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
