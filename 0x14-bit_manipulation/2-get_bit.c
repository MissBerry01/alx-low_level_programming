#include "main.h"

/**
 * get_bit - gets value of a bit at a given index
 * @n: the bit
 * @index: index from 0
 *
 * Return: value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	bit = 1 << index;
	result = n & bit;

	if (result == bit)
	return (1);
	return (0);
}
