#include "lists.h"
#include <stdlib.h>

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a listint_t linked list.
 * @head: A pointer to the head of the listint_t
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_count(listint_t *head)
{
listint_t *slow, *fast;
size_t unique_nodes = 0;

if (head == NULL || head->next == NULL)
return (0);

slow = head->next;
fast = head->next->next;

while (fast != NULL)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
unique_nodes++;
slow = slow->next;
fast = fast->next;
}

slow = slow->next;
while (slow != fast)
{
unique_nodes++;
slow = slow->next;
}

return (unique_nodes);
}

slow = slow->next;
fast = fast->next->next;
}

return (0);
}

/**
 * free_listint_safe - Frees a listint_t list
 * @h: pointer to the address of the head
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t node_count, index;

node_count = looped_listint_count(*h);

if (node_count == 0)
{
for (; h != NULL && *h != NULL; node_count++)
{
temp = (*h)->next;
free(*h);
*h = temp;
}
}
else
{
for (index = 0; index < node_count; index++)
{
temp = (*h)->next;
free(*h);
*h = temp;
}

*h = NULL;
}

h = NULL;

return (node_count);
}
