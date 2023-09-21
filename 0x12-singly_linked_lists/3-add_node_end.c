#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list_t list
 * @head: pointer to head
 * @str: string to be duplicated
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	char *dup;
	int len;
	list_t *new, *last;

	if (str == NULL)
	return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
	free(new);
	return (NULL);
	}

	for (len = 0; str[len]; len++)
		;
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	*head = new;
	else
	{
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new;
	}
	return (*head);
}
