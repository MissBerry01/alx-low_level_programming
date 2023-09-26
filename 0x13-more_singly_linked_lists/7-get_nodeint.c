#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The node to be returned.
 *
 * Return: Pointer to the nth node, or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index)
	{
	if (head == NULL)
		return (NULL);
	head = head->next;
	n++;
	}

	return (head);
}
