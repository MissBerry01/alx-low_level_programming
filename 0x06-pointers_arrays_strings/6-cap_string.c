#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: pointer to string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
int string_check = 0;

while (s[string_check] != '\0')
{
if (s[string_check] >= 'a' && s[string_check] <= 'z')
{
if (string_check  == 0 || s[string_check - 1] == ' '
|| s[string_check - 1] == '\t' || s[string_check - 1] == '\n'
|| s[string_check - 1] == ',' || s[string_check - 1] == ';'
|| s[string_check - 1] == '.' || s[string_check - 1] == '!'
|| s[string_check - 1] == '?' || s[string_check - 1] == '"'
|| s[string_check - 1] == '(' || s[string_check - 1] == ')'
|| s[string_check - 1] == '{' || s[string_check - 1] == '}')
{
s[string_check] -= 32;
}
}
string_check++;
}
return (s);
}
