#include "main.h"

/**
 * is_palindrome - checks whether string is palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - checks length of a string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (_strlen_recursion(s + 1) + 1);
}
/**
 * compare_string - compare each string character
 * @s: the string
 * @a: smallest iterator
 * @b: largest iterator
 * Return: int
 */
int compare_string(char *s, int a, int b)
{
if (*(s + a) == *(s + b))
{
if (a == b || a == b + 1)
return (1);
return (0 + compare_string(s, a + 1, b - 1));
}
return (0);
}
