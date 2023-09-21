#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the linked list to list_t
 *
 * Return: number of nodes in h
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
