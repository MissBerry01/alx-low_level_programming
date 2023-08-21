#include "main.h"

/**
 * _puts - a function that prints a string and a new line, to stdout
 * @str: string pointer
 * Return: String and new line
 */

void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
