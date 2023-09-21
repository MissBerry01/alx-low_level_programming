#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning
 * of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: the address of the new element
 * or NULL if it failed
str needs to be duplicated
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
	free(new);
	return (NULL);
	}

	new->len = strlen(new->str);

	new->next = *head;
	*head = new;

	return (new);
}
