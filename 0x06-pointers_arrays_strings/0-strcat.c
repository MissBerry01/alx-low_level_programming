#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: string pointer destination
 * @src: string pointer source
 * Return: string pointer destination
 */
char *_strcat(char *dest, char *src)
{
int string_length, a;

string_length = 0;
while (dest[string_length] != '\0')
{
string_length++;
}
for (a = 0; src[a] != '\0'; a++, string_length++)
{
dest[string_length] = src[a];
}
return (dest);
}

