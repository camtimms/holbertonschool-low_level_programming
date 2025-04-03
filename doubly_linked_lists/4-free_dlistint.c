#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: Pointer to head of the list
 *
 * Description: Frees a doubly linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);

	free(head);
}
