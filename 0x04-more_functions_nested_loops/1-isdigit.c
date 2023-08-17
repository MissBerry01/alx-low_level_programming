#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c : The character to be checked
 * Return: 1 for a digit character or 0 for any other
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}

