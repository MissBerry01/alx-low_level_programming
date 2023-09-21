#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head->str);
		free(head);
		head = current_node;
	}
}
