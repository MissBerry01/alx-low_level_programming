#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to the head of the list.
 * @index: Position to insert the new node.
 * @n: Value of the inserted node.
 *
 * Return: Pointer to the head of the list, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current_node, *new_node;

	current_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (index == 0)
	{
	new_node->next = current_node;
	*head = new_node;
	return (*head);
	}

	while (index > 1)
	{
	current_node = current_node->next;
	index--;

	if (current_node == NULL)
	{
		free(new_node);
	return (NULL);
	}
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (*head);
}
