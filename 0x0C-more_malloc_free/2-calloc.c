#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory
 * @size: size of the element
 *
 * Return: vid pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(t + i) = 0;
	return ((void *) t);
}
