#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n : number of arguements passed into the function
 * Return: resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int sum;

	va_start(list, n);

	sum = 0;

	for (a = 0; a < n; a++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
