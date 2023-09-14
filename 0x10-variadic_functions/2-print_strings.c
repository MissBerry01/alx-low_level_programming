#include "variadic_functions.h"
/**
 * print_strings- prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int a;
	va_list list;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(list, char *);
		if (!str)
			printf("(nil)");
		else
		{
			printf("%s", str);
			if (a < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
