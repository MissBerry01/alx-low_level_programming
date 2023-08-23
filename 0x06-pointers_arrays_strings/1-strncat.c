#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: string pointer destination
 * @src: string pointer source
 * @n: number of files to be concatenated
 * Return: string pointer destination
 */
char *_strncat(char *dest, char *src, int n)
{
int string_length, a;
/* a is the counter for n bytes of src to be concatenated */
/* string_length =  string destination length */

string_length = 0;
while (dest[string_length] != '\0')
{
string_length++;
}
for (a = 0; a < n && src[a] != '\0'; a++, string_length++)
{
dest[string_length] = src[a];
}
dest[string_length] = '\0';
return (dest);
}
