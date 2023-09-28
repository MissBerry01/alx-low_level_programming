#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to the string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	return 0;

	n = (n << 1) | (b[i] - '0');
	}

	return (n);
}
