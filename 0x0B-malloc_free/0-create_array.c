#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array in int
 * @c: stores the strings of a character
 * Return: pointer to c
 */
char *create_array(unsigned int size, char c)
{
char *t;
size_t i;

i = 0;
if (size == 0)
return (NULL);
t = malloc(sizeof(char) * size);
if (t == NULL)
return (NULL);
while (i < size)
{
t[i] = c;
i++;
}
return (t);
}
