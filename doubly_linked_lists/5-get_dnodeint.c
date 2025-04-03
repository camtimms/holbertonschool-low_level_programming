#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Finds a node for a given index
 *
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node you want retrieved
 *
 * Description: Iterate nodes until Index is reached
 *
 * Return: Node at index or on fail (NULL)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr_node = head;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (curr_node->next == NULL)
			return (NULL);
		curr_node = curr_node->next;
		i++;
	}
	return (curr_node);
}
