#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted
 *
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *current, *node;

if (!head || !*head)
	return (-1);

current = *head;

if (index == 0)
{
	*head = (*head)->next;
	free(current);
	return (1);
}

for (n = 0; n < (index - 1); n++)
}
	current = current->next;

if (current == NULL)
	return (-1);
}

node = current->next;
current->next = node->next;
free(node);
return (1);
}
