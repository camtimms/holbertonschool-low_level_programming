#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a node at the begining of a linked list
 *
 * @head: Head of the linked list
 * @str: String to store in node
 *
 * Description: Adds a new node at the start of the linked list
 *
 * Return: Address of new head node or fail (NULL)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	int str_len = 0;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	while (str[str_len] != '\0')
		str_len++;
	new_node->len = str_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
