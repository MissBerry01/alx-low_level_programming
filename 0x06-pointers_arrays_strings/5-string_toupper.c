#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @x: pointer to string
 * Return: pointer to uppercase string
 */

char *string_toupper(char *x)
{
int length_of_string = 0;

while (x[length_of_string] != '\0')
{
if (x[length_of_string] >= 'a' && x[length_of_string] <= 'z')
{
x[length_of_string] = x[length_of_string] - ('a' - 'A');
}
length_of_string++;
}

return (x);
}
