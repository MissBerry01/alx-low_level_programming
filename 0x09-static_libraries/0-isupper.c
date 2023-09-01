#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: Character to be checked
 * Return: 1 for uppercase or 0 for any other
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
