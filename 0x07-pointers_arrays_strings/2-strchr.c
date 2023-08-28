#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to locate
 *
 * Return: first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
int num;
for (num = 0; s[num] >= '\0'; num++)
{
if (s[num] == c)
return (s + num);
}
return ('\0');
}
