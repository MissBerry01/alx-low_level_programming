#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of elements in an array
 * @cmp: pointer to the function to compare
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
