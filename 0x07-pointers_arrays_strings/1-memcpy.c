#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest:the place where it will be copied
 * @src:source of string
 * @n:function copies
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{       
dest[a] = src[a];
a++;
}
return (dest);
}
