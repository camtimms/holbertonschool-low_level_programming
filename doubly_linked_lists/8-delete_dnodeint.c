#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Deletes node at an index of a doubly linked list
 *
 * @head: Pointer to the head of the list
 * @index: Index to delete at
 *
 * Description: Deletes a node at an index of a doubly linked list
 *
 * Return: 1 if it succeeds or -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node = *head;
	unsigned int i = 0;

	/* Traverse to index */
	while (i < index && curr_node)
	{
		curr_node = curr_node->next;
		i++;
	}

	/* Check if index is out of bounds */
	if (!curr_node || i != index)
		return (-1);
	
	/* Delete node start */
	if (*head == curr_node)
	{
		*head = curr_node->next;
		if (curr_node->next != NULL)
			curr_node->next->prev = NULL;
	}
	
	/* Delete node middle and end */	 
	if (curr_node->prev != NULL)
		curr_node->prev->next = curr_node->next;
	if (curr_node->next != NULL)
		curr_node->next->prev = curr_node->prev;
	
	free(curr_node);
	return (1);
}
