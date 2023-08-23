#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: The character to print
 * Return: On success 1. On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 *  print_number -  a function that prints an integer.
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{

unsigned int x1;

x1 = (n < 0) ? -n : n;
if ( n< 0)
{
_putchar('-');
}

if (x1 / 10 != 0)
{
print_number(x1 / 10);
}
_putchar((x1 % 10) + '0');
}
