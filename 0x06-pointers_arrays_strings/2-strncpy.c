#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: string pointer destination
 * @src: string pointer source
 * @n: number of bytes to be used
 * Return: string pointer destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int num_of_bytes;

for (num_of_bytes = 0; num_of_bytes < n && src[num_of_bytes]
!= '\0'; num_of_bytes++)
dest[num_of_bytes] = src[num_of_bytes];

for (; num_of_bytes < n; num_of_bytes++)
dest[num_of_bytes] = '\0';

return (dest);
}
