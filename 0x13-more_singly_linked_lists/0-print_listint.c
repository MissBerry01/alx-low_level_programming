#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

		while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count++;
	}

		return (nodes_count);
}
