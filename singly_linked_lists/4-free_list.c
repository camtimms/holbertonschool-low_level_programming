#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list from memory
 *
 * @head: Pointer to head of the list
 *
 * Description: Frees a linked list from memory
 * 
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);	
}	
