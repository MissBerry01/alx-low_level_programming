#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the current head of the list.
 * @n: Value to be placed in the new node.
 *
 * Return: Address of the new node, or NULL in case of failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *current_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
	*head = node;
	return (*head);
	}

	current_node = *head;
	while (current_node->next != NULL)
	current_node = current_node->next;

	current_node->next = node;

	return (*head);
}
