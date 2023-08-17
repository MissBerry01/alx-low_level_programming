#include "main.h"

/**
 * print_triangle -  a function that prints a triangle and a new line.
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int row, space, hash;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (space = size - row; space >= 1; space--)
{
_putchar(' ');
}
for (hash = 1; hash <= row; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
