#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t unique_nodes = 0;

if (head == NULL)
return (0);

slow_ptr = head;
fast_ptr = head;

while (fast_ptr != NULL && fast_ptr->next != NULL)
{
slow_ptr = slow_ptr->next;
fast_ptr = (fast_ptr->next)->next;

if (slow_ptr == fast_ptr)
{
size_t loop_size = 1;
slow_ptr = slow_ptr->next;

while (slow_ptr != fast_ptr)
{
loop_size++;
slow_ptr = slow_ptr->next;
}

unique_nodes = loop_size;
break;
}
}

return (unique_nodes);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t node_count = 0;

node_count = looped_listint_len(head);

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
node_count++;
if (node_count > 1 && node_count % looped_listint_len(head) == 0)
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
}

return (node_count);
}
