#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory contains a copy of
 * the string given as a parameter
 * @str: initial input string
 * Return: pointer to the allocated memory
 */
char *_strdup(char *str)
{
size_t i, j;
char *t;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
i++;
t = malloc(sizeof(*str) * i);
if (t == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
{
t[j] = str[j];
j++;
}
return (t);
}
