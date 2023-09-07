#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1:first string
 * @s2:second string
 * @n: number of chars to be added
 * Return: pointer to the newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *t;
size_t i, j, a;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i] != '\0'; i++)
	;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j] != '\0'; j++)
	;
}
if (j > n)
j = n;
t = malloc(sizeof(char) * (i + j + 1));

if (t == NULL)
return (NULL);
for (a = 0; a < i; a++)
t[a] = s1[a];
for (a = 0; a < j; a++)
t[a + i] = s2[a];
t[i + j] = '\0';
return (t);
}
