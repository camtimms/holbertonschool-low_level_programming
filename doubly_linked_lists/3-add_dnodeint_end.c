#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list
 *
 * @head: Pointer to the first node in the doubly linked list
 * @n: Integer, data to store in list
 *
 * Description: Adds a node to the end of a doubly linked list 
 *
 * Return: Address of new element (new_node) or fail (NULL)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *curr_node;

	if (!new_node)
		return (NULL);
	
	/* Create new node */
	new_node->prev = NULL; 
	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == NULL)
		return (*head = new_node);
	
	/* Find last node in list */
	curr_node = *head; 
	while (curr_node->next != NULL)
		curr_node = curr_node->next;
	
	/* Link nodes together */	
	curr_node->next = new_node;
	new_node->prev = curr_node; 
	

	return (new_node);	
}
