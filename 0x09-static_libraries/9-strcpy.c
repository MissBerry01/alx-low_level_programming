#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by 'src'
 * including the terminating null byte (\0),
 * to the buffer pointed to by 'dest'
 * @src: char type string
 * @dest:char type string
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)

{
int a = -1;
do {
a++;
dest[a] = src[a];
} while (src[a] != '\0');
return (dest);
}
