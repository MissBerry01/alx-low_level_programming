#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: void pointer
 * @old_size: initial size
 * @new_size: new size
 * Return: pointer to new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	n = malloc(new_size * sizeof(char));
	if (n == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			n[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (n);
	}
	while (i < new_size)
	{
		n[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (n);
}
