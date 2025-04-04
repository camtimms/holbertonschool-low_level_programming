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
	dlistint_t *new_node, *prev_node, *curr_node = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Move to index */
	while (i < idx && curr_node)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		i++;
	}

	/* Check if i matches idx if not idx is out of bounds*/
	if (i != idx)
		return (NULL);

	/* Check if node is the last element */
	if (curr_node == NULL)
		return (add_dnodeint_end(h, n));
	
	/* Now allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* Initialise node */
	new_node->prev = curr_node->prev;
	new_node->n = n;
	new_node->next = curr_node;

	/* Adjust pointers of nodes either side */
	if (curr_node->prev)
		prev_node->next = new_node;
	curr_node->prev = new_node;

	return (new_node);
}
