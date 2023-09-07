#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	a = malloc(j * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j && min <= max; i++, min++)
		*(a + i) = min;
	return (a);
}

