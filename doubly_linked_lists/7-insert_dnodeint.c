#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts node at specified index
 *
 * @h: Pointer to header of linked list
 * @idx: Index to place the new node
 * @n: Integer data to place inside of new node
 *
 * Description: Inserts node at specified index
 *
 * Return: Address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *curr_node = *h;
	dlistint_t *prev_node;
	unsigned int i = 0;

	if (!new_node)
		return (NULL);
	/* Initialise node */
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	/* Special case idx = 0 */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* Move to index */
	while (i < idx && curr_node)
	{
		curr_node = curr_node->next;
		i++;
	}
	/* Check if curr_node is out of bounds */
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	/* Set prev and next node */
	prev_node = curr_node->prev;
	/* Adjust pointers within nodes */
	prev_node->next = new_node;
	new_node->prev = prev_node;
	new_node->next = curr_node;
	curr_node->prev = new_node;

	return (new_node);
}
