#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: String to be checked
 * Return: Length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (s[length])
	length++;

return (length);
}
