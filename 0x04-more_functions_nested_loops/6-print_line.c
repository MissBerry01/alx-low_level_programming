#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: 0 (Success)
 */

void print_line(int n)
{
int a;

for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
