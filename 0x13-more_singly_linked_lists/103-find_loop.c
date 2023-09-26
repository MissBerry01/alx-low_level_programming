#include "lists.h"

/**
 * find_listint_loop - Finds the loop in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
	return (NULL);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
	{
	listint_t *loop_start = head;
	while (loop_start != slow)
	{
	loop_start = loop_start->next;
	slow = slow->next;
	}
	return (loop_start);
	}
	}

	return (NULL);
}

