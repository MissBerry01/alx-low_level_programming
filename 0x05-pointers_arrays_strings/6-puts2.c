#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string to be printed
 */

void puts2(char *str)
{
int a = 0;

while (str[a] != '\0')
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');
}
