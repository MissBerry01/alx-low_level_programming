#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: Pointer to the head of the list.
 *
 * Return: Pointer to the node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)

{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node = NULL;

	if (head == NULL || *head == NULL)
	return (NULL);
	while (current != NULL)
	{
	next_node = current->next;

	current->next = prev;

	prev = current;
	current = next_node;
	}
	*head = prev;
	return (*head);
}
