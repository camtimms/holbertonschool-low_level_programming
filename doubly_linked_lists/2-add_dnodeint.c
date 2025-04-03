#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add node to start of a doubly linked list
 *
 * @head: Double pointer containing the head/start of the doubly linked list
 * @n: Interger, Data to include in node
 *
 * Description
 *
 * Return: Address of new element () or fail (NULL);
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	/* Make new node */
	new_node->prev = NULL;
	new_node->n = n;
	if (*head != NULL)
	{
		new_node->next = *head;
		/* Set first node prev to new_node */
		(*head)->prev = new_node;
	}
	else
		new_node->next = NULL;

	/* Change head to new_node */
	*head = new_node;

	return (new_node);
}
